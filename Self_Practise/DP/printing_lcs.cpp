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
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));



string lcs(string s1,string s2,int m,int n,vector<vector<string>> &dp){
	if(m == 0 || n == 0){
		string z = to_string(s1[m]);
		if(s1[m] == s2[n])	return dp[m][n] = z;
		else	return dp[m][n] = "";
	}
	if(dp[m][n] != "-1")	return dp[m][n];
	if(s1[m]==s1[n])	return dp[m][n] = to_string(s1[m]) + lcs(s1,s2,m-1,n-1,dp);
	else{
		string t1 = lcs(s1,s2,m-1,n,dp);
		string t2 = lcs(s1,s2,m,n-1,dp);
		if(t1.size()>t2.size())	return dp[m][n] = t1;
		else return dp[m][n] = t2;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	string s1,s2,res;cin>>s1>>s2;
	int m = s1.size();
	int n = s2.size();
	vector<vector<string>> dp(m+1,vector<string> (n+1,"-1"));
	res = lcs(s1,s2,m,n,dp);
	cout<<res;
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// acbcf
// abcdaf