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

#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

bool subset(int n,vi &v,int sum,vector<vi> &dp){
	if(sum == 0)	return dp[n][sum] = 1;
	else if(n == 0 && sum !=0)	return dp[n][sum] = 0;
	if(dp[n][sum]!=-1)	return dp[n][sum];

	if(v[n-1]<=sum)	return dp[n][sum] = (subset(n-1,v,sum-v[n-1],dp) || subset(n-1,v,sum,dp));
	else	return dp[n][sum] = subset(n-1,v,sum,dp);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n,sum;cin>>n>>sum;
	vi v(n);
	vector<vi> dp(n+1,vi (sum+1,-1));
	rep(i,0,n)	cin>>v[i];

	if(subset(n,v,sum,dp))	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */

	