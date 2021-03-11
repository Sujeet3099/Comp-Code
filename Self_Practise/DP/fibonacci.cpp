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

int dp[101] = {-1};

int fib(int n){
	if(n==0 || n==1)	return n;
	if(dp[n]!=-1)	return dp[n];
	else	return dp[n] = fib(n-1)+fib(n-2);
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    memset(dp,-1,sizeof(dp));
    // dp[0]= 0;
    // dp[1] = 1;
    // rep(i,0,100)	cout<<dp[i]<<' ';
    cin>>test;
    while(test--){
    	int m;cin>>m;
        cout<<fib(m)<<endl;
    }

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
