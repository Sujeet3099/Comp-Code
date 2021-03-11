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

vector<bool> vis(10000);

bool dfs(int n,int dest,vector<vi> &v){

	if(n == dest)	return true;

	if(vis[n]){
		return false;
	}
	vis[n] = true;

	repA(i,v[n]){
		bool path;
		if(!vis[i])	path = dfs(i,dest,v);
		if(path)	return true;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,m;cin>>n>>m;
    vector<vi> v(n);

    rep(i,0,m){
    	int src,nbr,wt;cin>>src>>nbr>>wt;
    	v[src].pb(nbr);
    	v[nbr].pb(src);
    }

    int src,dest;cin>>src>>dest;

    cout<<(dfs(src,dest,v)?"true":"false");

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
