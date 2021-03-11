#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   segmnt tree
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
	int mid = (ss+se)/2;	
	buildTree(2*si,ss,mid,v,segTree);
	buildTree(2*si+1,mid+1,se,v,segTree);
	segTree[si] = min(segTree[2*si],segTree[2*si+1]);
	return;
}

void update(int si,int ss,int se,int qi,vi &v,vi &segTree){
	if(ss == se){
		segTree[si] = v[ss];
		return;
	}
	int mid = (ss+se)/2;
	if(qi<=mid)	update(2*si,ss,mid,qi,v,segTree);
	else	update(2*si+1,mid+1,se,qi,v,segTree);
	segTree[si] = min(segTree[2*si],segTree[2*si+1]);
}

int query(int si,int ss,int se,int qs,int qe,vi &v,vi &segTree){
	if(qs > se || qe < ss)	return INT_MAX;
	if(ss>=qs && se<=qe)	return segTree[si];
	int mid = (ss+se)/2;
	int left = query(2*si,ss,mid,qs,qe,v,segTree);
	int right = query(2*si+1,mid+1,se,qs,qe,v,segTree);
	return min(left,right);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
    int n;cin>>n;
    vector<int> v(n+1),segTree(4*n+1);
    for(int i=1; i<=n; i++)	cin>>v[i];

    buildTree(1,1,n,v,segTree);
	int q;cin>>q;

	while(q--){
		char t;int a,b;cin>>t>>a>>b;
		if(t == 'U'){
			v[b] = a;
			update(1,1,n,b,v,segTree);
		}
		else{
			cout<<query(1,1,n,a,b,v,segTree)<<endl;;
		}
	}
	
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
