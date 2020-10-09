#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Social Networking Graph
 * link          :   https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/
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

void bfs(int src, vector<vi>&adj,vi &vis, vi &dist, vi &level){
	queue<int> q;
	q.push(src);
	vis[src] = 1;
	dist[src] = 0;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		repA(child,adj[cur]){
			if(vis[child]==0){
				vis[child] = 1;
				dist[child] = dist[cur]+1;
				q.push(child);
				level[dist[child]]++;
			}
		}
	}
}

void solve(){
	int n,m;cin>>n>>m;
	vector<vi>	adj(n+1);
	int a,b;
	while(m--){
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int q;cin>>q;
	while(q--){
		int src,d;cin>>src>>d;
		vi dist(n+1),vis(n+1);
		vi level(n+1);
		bfs(src,adj,vis,dist,level);
		cout<<level[d]<<endl;
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
// 9 10
// 1 2
// 2 3
// 1 7
// 2 4
// 3 4
// 4 7
// 7 8
// 9 7
// 7 6
// 5 6
// 3
// 4 2
// 5 3
// 2 1