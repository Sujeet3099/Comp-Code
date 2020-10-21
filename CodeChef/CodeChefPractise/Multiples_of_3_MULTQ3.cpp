#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Multiples of 3 Problem Code: MULTQ3
 * link          :   https://www.codechef.com/problems/MULTQ3
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

struct triple{
	int a[3];
};
triple segTree[400004];
int lazyTree[400004];
// vi v(nn),lazyTree(4*nn+1);
// vector<triple> segTree(4*nn+1);

void rShift(int si){
	int z = segTree[si].a[2];
	segTree[si].a[2] = segTree[si].a[1];
	segTree[si].a[1] = segTree[si].a[0];
	segTree[si].a[0] = z;
}

void buildTree(int si,int ss,int se){
	if(ss==se){
		// segTree[si] = {1,0,0};
		segTree[si].a[0] = 1;
		segTree[si].a[1] = 0;
		segTree[si].a[2] = 0;
		return;
	}
	int mid = (se+ss)/2;
	buildTree(2*si,ss,mid);
	buildTree(2*si+1,mid+1,se);
	segTree[si].a[0] = segTree[2*si].a[0] + segTree[2*si+1].a[0];
	segTree[si].a[1] = segTree[2*si].a[1] + segTree[2*si+1].a[1];
	segTree[si].a[2] = segTree[2*si].a[2] + segTree[2*si+1].a[2];
	return;
}

void update(int si,int ss,int se,int qs,int qe){
	if(lazyTree[si]!=0){
		int dx = lazyTree[si];
		lazyTree[si] = 0;
		if(ss != se){
			lazyTree[2*si] +=dx;
			lazyTree[2*si+1] +=dx;
		}
		dx %= 3;
		rep(i,0,dx){
			rShift(si);
		}
	}
	if(qs>se || qe<ss)	return;
	if(ss>=qs && se<=qe){
		rShift(si);
		if(ss!=se){
			lazyTree[2*si]++;
			lazyTree[2*si+1]++;
		}
		return;
	}
	int mid = (se+ss)/2;
	update(2*si,ss,mid,qs,qe);
	update(2*si+1,mid+1,se,qs,qe);
	segTree[si].a[0] = segTree[2*si].a[0] + segTree[2*si+1].a[0];
	segTree[si].a[1] = segTree[2*si].a[1] + segTree[2*si+1].a[1];
	segTree[si].a[2] = segTree[2*si].a[2] + segTree[2*si+1].a[2];
	return;
}

int query(int si,int ss,int se,int qs,int qe){
	if(lazyTree[si]!=0){
		int dx = lazyTree[si];
		lazyTree[si] = 0;
		if(ss != se){
			lazyTree[2*si] +=dx;
			lazyTree[2*si+1] +=dx;
		}
		dx %= 3;
		rep(i,0,dx){
			rShift(si);
		}
	}
	if(qs>se || qe<ss)	return 0;
	if(ss>=qs && se<=qe)	return segTree[si].a[0];
	int mid = (ss+se)/2;
	int left = query(2*si,ss,mid,qs,qe);
	int right = query(2*si+1,mid+1,se,qs,qe);
	return left+right;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t start=clock();

	int n,q;cin>>n>>q;
	// vi v(n),lazyTree(4*n+1);
	// vector<triple> segTree(4*n+1);
	buildTree(1,1,n);

	int t,l,r;
	while(q--){
		cin>>t>>l>>r;
		l++,r++;
		if(t==0) update(1,1,n,l,r);
		else	cout<<query(1,1,n,l,r)<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 4 7
// 1 0 3
// 0 1 2
// 0 1 3
// 1 0 0
// 0 0 3
// 1 3 3
// 1 0 3
