#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   minimum subset sum
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
    
    int n;cin>>n;
    vi v(n);
    int sum = 0;
    rep(i,0,n)	cin>>v[i],sum+=v[i];
	vector<vector<bool>>	dp(n+1,vector<bool> (sum+1));

	rep(i,0,sum+1)	dp[0][i] = false;
	rep(i,0,n+1)	dp[i][0] = true;

	rep(i,1,n+1){
		rep(j,1,sum+1){
			if(v[i-1]<=j)	dp[i][j] = (dp[i-1][j-v[i-1]] || dp[i-1][j]);
			else	dp[i][j] = dp[i-1][j];
		}
	}
	vi res;
	rep(i,0,(sum+1)/2){
		if(dp[n][i])	res.pb(i);
	}
	int mn = INT_MAX;
	repA(i,res)	mn = min(mn,sum-2*i);
	cout<<mn<<endl;
	repA(i,res)	cout<<i<<' ';
	// rep(i,0,n+1){
	// 	rep(j,0,sum+1)	cout<<dp[i][j]<<' ';
	// 	cout<<endl;
	// }
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
