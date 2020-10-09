#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Feasible relations
 * link          :   https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/
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

int c = 0;
void dfs(int v,vector<vi>&adj,vi &vis,vi &component){
	vis[v] = 1;
	component[v] = c;
	repA(child,adj[v])	if(vis[child]==0)	dfs(child,adj,vis,component);
	return;
}

void solve(){
	int n,m;cin>>n>>m;
	vector<vi> adj(n+1);
	vector<pair<int,int> > v;
	int a,b;string s;
	while(m--){
		cin>>a>>s>>b;
		if(s=="=")	adj[a].pb(b),adj[b].pb(a);
		else	v.pb(mp(a,b));
	}
	vi component(n+1);
	vi vis(n+1);
	rep(i,0,n+1){
		if(vis[i]==0)	dfs(i,adj,vis,component),c++;
	}
	repA(i,v){
		if(component[i.se]==component[i.fi]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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
// 2
// 2 2
// 1 = 2
// 1 != 2
// 3 2
// 1 = 2
// 2 != 3