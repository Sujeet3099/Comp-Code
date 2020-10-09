#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   PPATH - Prime Path
 * link          :   https://www.spoj.com/problems/PPATH/
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

bool isPrime(int n){
	for(int i = 2; i*i<=n; i++){
		if(n%i==0)	return false;
	}
	return true;
}

bool isValid(int a,int b){
	int c = 0;
	while(a > 0){
		if(a % 10 != b % 10)	c++;
		a /= 10,b /= 10;
	}
	if(c == 1)	return true;
	else return false;
}
vector<vi> adj(10001);
vector<int> primes;

void buildGraph(){
	rep(i,1000,10000)	if(isPrime(i))	primes.pb(i);
	rep(i,0,primes.size()){
		rep(j,i+1,primes.size()){
			int a = primes[i];
			int b = primes[j];
			if(isValid(a,b)){
				adj[a].pb(b);
				adj[b].pb(a);
			}
		}
	}
}

void bfs(int src,vi &vis,vi &dist){
	queue<int> q;
	q.push(src);
	dist[src] = 0;
	vis[src] = 1;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		repA(child,adj[cur]){
			if(vis[child]==0){
				q.push(child);
				vis[child] = 1;
				dist[child] = dist[cur] + 1;
			}
		}
	}
}
void solve(){
	int n,m;cin>>n>>m;
	vi vis(10001,0),dist(10001,-1);
	bfs(n,vis,dist);

	if(dist[m] == -1)	cout<<"Impossible"<<endl;
	else	cout<<dist[m]<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	buildGraph();
	while(test--){
		solve();
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 3 2
// 1 2
// 2 3
// 4 4
// 1 2
// 2 3
// 3 4
// 4 2