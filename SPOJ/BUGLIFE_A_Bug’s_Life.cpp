#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   BUGLIFE - A Bug’s Life
 * link          :   https://www.spoj.com/problems/BUGLIFE/
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


bool dfs(int v,int c,vector<vector<int> >&df,vector<int>&col,vector<int>&vis){
	vis[v] = 1;
	col[v] = c;
	repA(i,df[v]){
		if(vis[i]==0){
			if(dfs(i,c^1,df,col,vis)==false)
				return false;
		}
		else{
			if(col[i]==col[v])	return false;
		}
	}
	return true;
}

void solve(){
	int m,n;cin>>n>>m;
	int t = m;

	vector<vector<int> > df(n+1);
	vi vis(n+1,0);
	vi col(n+1,0);
	while(t--){
		int a,b;cin>>a>>b;
		df[a].pb(b);
		df[b].pb(a);
	}
	bool res = true;
	for(int i = 1; i <= n; i++){
		if(vis[i]==0){
			res = dfs(i,0,df,col,vis);
			if(res==false){
				cout<<"Suspicious bugs found!"<<endl;
				return;
			}
		}
	}
	cout<<"No suspicious bugs found!"<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	int z = 1;
	while(test--){
		cout<<"Scenario #"<<z<<":"<<endl;z++;
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
// 3 3
// 1 2
// 2 3
// 1 3
// 4 2
// 1 2
// 3 4