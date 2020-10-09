#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   E. Bertown roads
 * link          :   https://codeforces.com/problemset/problem/118/e
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

int timer;
bool isBridge;
void bridge(int v,int par,vector<vi>&adj,vi &vis,vi &intime,vi &lowtime,vector<pair<int,int> >&res){
	vis[v] = 1;
	intime[v] = lowtime[v] = timer++;
	repA(child,adj[v]){
		if(child==par)	continue;
		if(vis[child]){
			lowtime[v] = min(lowtime[v],intime[child]);
			if(intime[v]>intime[child])	res.pb({v,child});
		}
		else{
			bridge(child,v,adj,vis,intime,lowtime,res);
			if(lowtime[child]>intime[v]){
				isBridge = true;
				return;
			}
			res.pb({v,child});
			lowtime[v] = min(lowtime[v],lowtime[child]);
		}
	}
	return;
}
void solve(){
	int m,n;cin>>n>>m;
	vector<vi>adj(n+1);
	vi vis(n+1),intime(n+1),lowtime(n+1);
	while(m--){
		int u,v;cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector<pair<int,int> > res;
	isBridge = false;
	timer = 0;
	bridge(1,-1,adj,vis,intime,lowtime,res);
	
	if(isBridge){
		cout<<0<<endl;return;
	}
	repA(i,res)	cout<<i.fi<<' '<<i.se<<endl;
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
// 6 8
// 1 2
// 2 3
// 1 3
// 4 5
// 4 6
// 5 6
// 2 4
// 3 5
