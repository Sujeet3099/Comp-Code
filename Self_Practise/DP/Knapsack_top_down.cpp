#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   0/1 knapsack recursive memoized
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



int knapsack(vi wt,vi val,int w,int n,vector<vi>&dp){
	if(w == 0 || n==0)	return 0;
	if(dp[n][w] != -1)	return dp[n][w];
	if(wt[n-1]<=w){
		return dp[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1,dp),knapsack(wt,val,w,n-1,dp));
	}
	else{
		return dp[n][w] = knapsack(wt,val,w,n-1,dp);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
    int n,w;cin>>n>>w;
	vi wt(n),val(n);
	vector<vi> dp(n+1,vi (w+1,-1));
	
	// rep(i,0,n+1){
	// 	rep(j,0,w+1)	cout<<dp[i][j]<<' ';
	// 	cout<<endl;
	// }

	rep(i,0,n)	cin>>wt[i];
	rep(i,0,n)	cin>>val[i];

	int res = knapsack(wt,val,w,n,dp);
	cout<<res<<endl;
	
	// rep(i,0,n+1){
	// 	rep(j,0,w+1)	cout<<dp[i][j]<<' ';
	// 	cout<<endl;
	// }
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
