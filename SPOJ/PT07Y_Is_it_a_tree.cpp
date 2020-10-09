#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   PT07Y - Is it a tree
 * link          :   https://www.spoj.com/problems/PT07Y/
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

vi ar[100001];
vi vis(100001);
void dfs(int v){
	vis[v] = 1;
	repA(i,ar[v])	if(vis[i]==0)	dfs(i);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n,m;cin>>n>>m;
	int t = m;
	while(t--){
		int a,b;cin>>a>>b;
		ar[a].pb(b),ar[b].pb(a);
	}
	int c = 0;
	for(int i = 1; i <= n; i++){
		if(vis[i]==0)	dfs(i),c++;
	}
	if(c == 1 && m == n-1)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 3 2
// 1 2
// 2 3
