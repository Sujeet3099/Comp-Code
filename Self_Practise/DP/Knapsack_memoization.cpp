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
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
int temp = -1;
int dp[101][102];


int solve(int a[],int val[],int wt,int n){
	if(n==0||wt==0)	return 0;
	if(dp[n][wt]!=-1)	return dp[n][wt];
	if(a[n-1]>wt)	return solve(a,val,wt,n-1);
	else	return dp[n][wt]=max(val[n-1]+solve(a,val,wt-a[n-1],n-1),solve(a,val,wt,n-1));
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n,wt;cin>>n>>wt;
	int a[n],val[n];
	rep(i,0,n)	cin>>a[i];
	rep(i,0,n)	cin>>val[i];
	memset(dp,temp,sizeof(dp));
	cout<<solve(a,val,wt,n); 
	cout<<endl;
	rep(i,0,n+1){
		rep(j,0,n+1)	cout<<dp[i][j]<<' ';
		cout<<endl;
	}
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
