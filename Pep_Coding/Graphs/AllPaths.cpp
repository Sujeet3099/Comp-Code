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
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007

vector<bool> vis(100001);

void dfs(int src,int dest,vector<vi>&v,string s){
	if(src == dest){
		cout<<s+to_string(src)<<endl;
		return;
	}
	// if(vis[src])	return;

	vis[src] = true;
	s+=to_string(src);
	repA(i,v[src]){
		if(!vis[i])	dfs(i,dest,v,s);
		// vis[i] = 0;
	}
	vis[src] = false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,m;cin>>n>>m;
    vector<vi> v(n);

    rep(i,0,m){
    	int a,b,wt;cin>>a>>b>>wt;
    	v[a].pb(b);
    	v[b].pb(a);
    }

    int src,dest;cin>>src>>dest;
    dfs(src,dest,v,"");

    // repA(i,v[4])	cout<<i<<' ';
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
