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

ll dp[10001];

ll stair_path(int n){
	if(n<0)	return 0;
	if(n==0){
		return 1;
	}
	if(dp[n]!=-1)	return dp[n];
	return dp[n]=stair_path(n-1)+stair_path(n-2)+stair_path(n-3);

} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1,n;
    cin>>n;

    memset(dp,-1,sizeof(dp));
    dp[0]=1;
    rep(i,1,n+1){
    	if(i==1)	dp[i] = dp[i-1];
    	else if(i==2)	dp[i] = dp[i-1]+dp[i-2];
    	else dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    // while(test--)    cout<<stair_path(n);
    rep(i,0,n+1)	cout<<dp[i]<<endl;
    cout<<endl<<dp[n];
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
