#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Bishu and his Girlfriend
 * link          :   https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
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

vector<int> ar[1001];
vector<int> vis(1001,0);
vector<int> dis(1001,0);
void dfs(int v,int d){
	vis[v] = 1;
	dis[v] = d;
	repA(i,ar[v])	if(vis[i]==0)	dfs(i,dis[v]+1);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n;cin>>n;n--;
	while(n--){
		int u,v;cin>>u>>v;
		ar[u].pb(v),ar[v].pb(u);
	}
	dfs(1,0);
	int q;cin>>q;
	int mn = 1e9,res = -1;
	while(q--){
		int a;cin>>a;
		if(dis[a]<mn)	res = a,mn = dis[a];
		else if(dis[a]==mn && a<res)	res = a;
	}
	cout<<res<<endl;
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 6
// 1 2
// 1 3
// 1 4
// 2 5
// 2 6
// 4
// 5
// 6
// 3
// 4
// 
