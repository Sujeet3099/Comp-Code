#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   subset sum problem
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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
    int n,w;cin>>n>>w;
    vi v(n);
    rep(i,0,n)	cin>>v[i];
	bool dp[n+1][w+1];
	//initialize
	rep(i,0,w+1)	dp[0][i] = false;
	rep(i,0,n+1)	dp[i][0] = true;
	//dp code
	rep(i,1,n+1){
		rep(j,1,w+1){
			if(v[i-1]<=j)	dp[i][j] = (dp[i-1][j-v[i-1]] || dp[i-1][j]);
			else	dp[i][j] = dp[i-1][j];
		}
	}
	//result
	if(dp[n][w])	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
	//justforintuituion
	rep(i,0,n+1){
		rep(j,0,w+1)	cout<<dp[i][j]<<' ';
		cout<<endl;
	}
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
