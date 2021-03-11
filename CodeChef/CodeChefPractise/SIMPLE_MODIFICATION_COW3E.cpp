#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   SIMPLE MODIFICATION Problem Code: COW3E
 * link          :   https://www.codechef.com/problems/COW3E
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


void solve(){
	ll n,m,u,q;cin>>n>>m>>u>>q;
	ll a[n][m],up[n][m],sum[n+1][m+1];
	// vector<vll> a(n,vll(m)),up(n,vll(m)),sum(n+1,vll(m+1));
	rep(i,0,n)	rep(j,0,m)	cin>>a[i][j],sum[i][j] = 0,up[i][j] = 0;
	sum[n][m] = 0;
	while(u--){
		ll k,r1,c1,r2,c2;cin>>k>>r1>>c1>>r2>>c2;
		up[r1][c1] += k;
		if(r2+1<n)	up[r2+1][c1] -= k;
		if(c2+1<m)	up[r1][c2+1] -= k;
		if(r2+1 < n && c2+1 < m)	up[r2+1][c2+1] += k;
	}

	rep(i,1,n)	up[i][0] += up[i-1][0];
	rep(i,1,m)	up[0][i] += up[0][i-1];
	rep(i,1,n)	rep(j,1,m)	up[i][j] += (up[i-1][j]+up[i][j-1]-up[i-1][j-1]);

	rep(i,0,n)	rep(j,0,m)	a[i][j] += up[i][j];

	sum[0][0] = a[0][0];
	rep(i,1,n)	sum[0][i] += sum[0][i-1] + a[0][i];
	rep(i,1,m)	sum[i][0] += sum[i-1][0] + a[i][0];
	rep(i,1,n)	rep(j,1,m)	sum[i][j] += (sum[i-1][j]+sum[i][j-1]+a[i][j]-sum[i-1][j-1]);

	// rep(i,0,n){
	// 	rep(j,0,m)	cout<<a[i][j]<<' ';
	// 	cout<<endl;
	// }
	// cout<<endl;
	// rep(i,0,n){
	// 	rep(j,0,m)	cout<<sum[i][j]<<' ';
	// 	cout<<endl;
	// }
	while(q--){
		ll r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
		ll res = (sum[r2][c2]);
		if(r1-1>=0 && c1-1>=0)	res += sum[r1-1][c1-1];
		if(r1-1>=0)	res -= sum[r1-1][c2];
		if(c1-1>=0)	res -= sum[r2][c1-1];

		cout<<res<<endl;
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
// 3 3 2 2
// 1 2 3
// 1 1 0
// 4 -2 2
// 2 0 0 1 1
// -1 1 0 2 2
// 0 0 0 1
// 1 1 2 2