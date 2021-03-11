#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   lazy propagation on segment tree
 * link          :   
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

void buildTree(int si,int ss,int se,vi &v,vi &segTree){
	if(ss == se){
		segTree[si] = v[ss];
		return;
	}
	int mid = (se+ss)/2;
	buildTree(2*si,ss,mid,v,segTree);
	buildTree(2*si+1,mid+1,se,v,segTree);
	segTree[si] = segTree[2*si] + segTree[2*si+1];
	return;
}
void update(int si,int ss,int se,int qs,int qe,int val,vi &v,vi &segTree,vi &lazyTree){
	if(lazyTree[si]!=0){
		int dx = lazyTree[si];
		lazyTree[si] = 0;
		segTree[si] += ((se-ss)+1)*dx;

		if(ss!=se){
			lazyTree[2*si] += dx;
			lazyTree[2*si+1] += dx;
		}
	}
	if(qs>se || qe<ss)	return;
	if(ss>=qs && se<=qe){
		int dx = ((se-ss)+1) * val;
		segTree[si] += dx;
		if(ss!=se){
			lazyTree[2*si] += val;
			lazyTree[2*si+1] += val;
		}
		return;
	}
	int mid = (ss+se)/2;
	update(2*si,ss,mid,qs,qe,val,v,segTree,lazyTree);
	update(2*si+1,mid+1,se,qs,qe,val,v,segTree,lazyTree);
	segTree[si] = segTree[2*si] + segTree[2*si+1];
	return;
}

int query(int si,int ss,int se,int qs,int qe,vi &v,vi &segTree,vi &lazyTree){
	if(lazyTree[si]!=0){
		int dx = lazyTree[si];
		lazyTree[si] = 0;
		segTree[si] += ((se-ss)+1)*dx;

		if(ss!=se){
			lazyTree[2*si] += dx;
			lazyTree[2*si+1] += dx;
		}
	}
	if(qs > se || qe < ss)	return 0;
	if(ss>=qs && se<=qe)	return segTree[si];
	int mid = (ss+se)/2;
	int left = query(2*si,ss,mid,qs,qe,v,segTree,lazyTree);
	int right = query(2*si+1,mid+1,se,qs,qe,v,segTree,lazyTree);
	return left+right;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n;cin>>n;
	vector<int> v(n+1),segTree(4*n+1),lazyTree(4*n+1);
	rep(i,1,n+1)	cin>>v[i];
	buildTree(1,1,n,v,segTree);
	// repA(i,segTree)	cout<<i<<' ';cout<<endl;
	// repA(i,lazyTree)	cout<<i<<' ';cout<<endl;
	int q;cin>>q;
	while(q--){
		char t;cin>>t;
		int a,b,c;
		if(t == 'U'){
			cin>>a>>b>>c;
			update(1,1,n,a,b,c,v,segTree,lazyTree);
		}
		else if(t == 'R'){
			cin>>a>>b;
			cout<<query(1,1,n,a,b,v,segTree,lazyTree)<<endl;
		}
	}
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
