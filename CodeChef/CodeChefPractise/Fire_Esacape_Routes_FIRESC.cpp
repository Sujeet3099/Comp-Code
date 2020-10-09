#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Fire Escape Routes Problem Code: FIRESC
 * link          :   https://www.codechef.com/problems/FIRESC
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
#define M 1e9+7

ll cs = 0;
void dfs(int v,vector<vi>&adj,vi &vis){
	vis[v]=1;
	cs++;
	repA(i,adj[v])	if(vis[i]==0)	dfs(i,adj,vis);
	return;
}


void solve(){
	int n,m;cin>>n>>m;
	vector<vi> adj(n+1);
	vi vis(n+1);
	int a,b;
	while(m--){
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int c = 0;
	ll res = 1;
	ll mod = M;
	rep(i,1,n+1){
		cs = 0;
		if(vis[i]==0){
			dfs(i,adj,vis);
			c++;
			res = (res*cs)%mod;
		}
	}
	cout<<c<<' '<<res<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 4 2
// 1 2
// 2 3
// 5 3
// 1 2
// 2 3
// 1 3
// 6 3
// 1 2
// 3 4
// 5 6
