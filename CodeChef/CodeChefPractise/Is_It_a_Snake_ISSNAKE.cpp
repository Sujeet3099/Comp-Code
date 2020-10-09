#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Is It a Snake Problem Code: ISSNAKE
 * link          :   https://www.codechef.com/problems/ISSNAKE
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

void dfs(int v,vector<vi>&adj,vi&vis){
	vis[v] = 1;
	repA(i,adj[v])	if(vis[i] == 0)	dfs(i,adj,vis);
}

void solve(){
	int n;cin>>n;
	vector<vi> adj(n+1);
	vi vis(n+1);
	vector<char> a(n),b(n);
	rep(i,0,n)	cin>>a[i];
	rep(i,0,n)	cin>>b[i];
	int p,q;
	rep(i,0,n){
		if(a[i]=='#')	adj[1].pb(i);
		if(b[i]=='#')	adj[2].pb(i);
	}
	rep(i,0,n){
		cout<<i;
		repA(j,adj[i])	cout<<"->"<<j;
		cout<<endl;
	}
	int c = 0;
	// rep(i,1,3){
	// 	if(vis[i]==0)	dfs(i,adj,vis),c++;
	// }
	// if(c==1)	cout<<"YES"<<endl;
	// else	cout<<"NO"<<endl;
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
