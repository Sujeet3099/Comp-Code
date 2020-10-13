#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   RMQSQ - Range Minimum Query
 * link          :   https://www.spoj.com/problems/RMQSQ/
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

void buildTree(int i,int l,int r,vi &v,vi &segTree){
	if(l==r){
		segTree[i] = v[l];
		return;
	}
	int mid = (l+r)/2;
	buildTree(2*i,l,mid,v,segTree);
	buildTree(2*i+1,mid+1,r,v,segTree);
	segTree[i] = min(segTree[2*i],segTree[2*i+1]);
	return;
}
int queries(int i,int sl,int sr,int ql,int qr,vi &segTree){
	if(ql>sr || qr<sl)	return INT_MAX;
	if(sl>=ql && sr<=qr)	return segTree[i];
	int mid = (sl + sr)/2;
	int low = queries(2*i,sl,mid,ql,qr,segTree);
	int high = queries(2*i+1,mid+1,sr,ql,qr,segTree);
	return min(low,high);
}

void solve(){
	int n;cin>>n;
	vi v(n+1),segTree(4*n+1);
	rep(i,1,n+1)	cin>>v[i];
	buildTree(1,1,n,v,segTree);
	// repA(i,segTree)	cout<<i<<' ';
	int q;cin>>q;
	while(q--){
		int l,r;cin>>l>>r;
		// l--,r--;
		cout<<queries(1,1,n,l+1,r+1,segTree)<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 1 4 1
// 2
// 1 1
// 1 2