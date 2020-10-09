#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Monk and the Islands
 * link          :   https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
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

void bfs(int src,vector<vi>&adj,vi &vis,vi &dist){
	queue<int> q;
	q.push(src);
	vis[src] = 1;
	dist[src] = 0;
	while( !(q.empty()) ){
		int cur = q.front();
		q.pop();
		repA(i,adj[cur]){
			if(vis[i]==0){
				q.push(i);
				dist[i]=dist[cur]+1;
				vis[i]=1;
			}
		}
	}
}

void solve(){
	int n,m;cin>>n>>m;
	vector<vi> adj(n+1);
	vi vis(n+1),dist(n+1);
	int a,b;
	while(m--){
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	bfs(1,adj,vis,dist);
	cout<<dist[n]<<endl;
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
