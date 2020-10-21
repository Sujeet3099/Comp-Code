#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

// vector<int> ar[100001];
// vector<int> vis(100001,0);

void dfs(int v,vector< vector<int> >&ar,vector<int>&vis){
	vis[v] = 1;
	repA(i,ar[v])	if(vis[i]==0)	dfs(i,ar,vis);
	return ;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	int n,m;cin>>n>>m;
	vector< vector<int> > ar(n);
	vector<int> vis(n,0);
	while(m--){
		int a,b;cin>>a>>b;
		ar[a].pb(b),ar[b].pb(a);
	}
	int c = 0;
	for(int i = 1; i<=n; i++){
		if(vis[i]==0){
			dfs(i,ar,vis);
			c++;
		}
	}
	cout<<c<<endl;
	// repA(i,ar){
	// 	repA(j,i)	cout<<"->"<<j;
	// 	cout<<endl;
	// }
	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
