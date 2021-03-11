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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    int arr[n];
	int dp[n+1];
    memset(dp,0,sizeof(dp));
	dp[n] = 1;
    
    rep(i,0,n)	cin>>arr[i];
    for(int i = n-1; i >= 0; i--){
    	for (int j = 1; j <= arr[i] && i+j <= n; ++j){
    		 dp[i] += dp[i+j];
    	}
    }
    cout<<dp[0]<<endl;
    // rep(i,0,n+1)	cout<<dp[i]<<' ';

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
