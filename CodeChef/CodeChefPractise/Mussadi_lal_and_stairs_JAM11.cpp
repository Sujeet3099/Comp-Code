// #include"bits/stdc++.h"
// using namespace std;

// /**
//  * Copyright (c)
//  * author        :   Sujeet Kumar 
//  * question name :   Mussadi lal and stairs Problem Code: JAM11
//  * link          :   https://www.codechef.com/problems/JAM11
//  */

// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define mp make_pair
// #define fi first
// #define se second
// #define all(x) (x).begin(),(x).end()
// #define rep(i,a,n) for (ll i=a;i<n;i++)
// #define repA(i,v) for(auto i:v)
// #define per(i,a,n) for (ll i=n-1;i>=a;i--)
// #define vi vector<int>
// #define vll vector<ll>
// #define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
// ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
// {if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

// ll mod = 1000000007;
// ll n = 1e5;
// vll dp(n+1,-1);

// // ll stair(ll n){
// // 	if(n==1 || n==2 || n == 3){
// // 		if(n==3)	dp[n] = 4;
// // 		else	dp[n] = n;
// // 		// dp[n] = (ll)pow(2,n-1);
// // 		return dp[n];
// // 	}
// // 	if(dp[n] != -1){
// // 		return dp[n];
// // 	}

// // 	dp[n] = (stair(n-1)+stair(n-2)+stair(n-3))%mod;
// // 	return dp[n];
// // }
// //this recursive is still not optimised idk why...

// void solve(){
// 	int pos;cin>>pos;
// 	cout<<dp[pos]<<endl;
// 	return ;
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     clock_t start=clock();

//     dp[1] = 1;
//     dp[2] = 2;
//     dp[3] = 4;
//     rep(i,4,n+2)	dp[i] = (dp[i-1]+dp[i-2]+dp[i-3])%mod;
    
//     // stair(n);
// 	ll test = 1;
// 	cin>>test;
// 	while(test--){
// 		// int pos;cin>>pos;
// 		// cout<<dp[pos]<<endl;
// 		solve();
// 	}

// 	clock_t end=clock();
// 	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
// 	return 0;
// }
// /**
//  * Test Cases:-
//  */
// // 3
// // 5
// // 8
// // 3

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
#define rep(i,a,n) for (ll i=a;i<=n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n;i>=a;i--)

void solve(){
	int m,n;cin>>n>>m;
	int a[n][m];
	rep(i,0,n-1)  rep(j,0,m-1)  cin>>a[i][j];
	int top = 0, left = 0, down = n-1,right = m-1;
	while(top<=down && left<=right){
	    rep(i,left,right)    cout<<a[top][i]<<' ';
	    top++;
	    rep(i,top,down) cout<<a[i][right]<<' ';
	    right--;
	    if(left<right)	for(int i = right; i >= left; i--)	cout<<a[down][i]<<' ';
	    down--;
		for(int i = down; i >= top; i--)	cout<<a[i][left]<<' ';
	    left++;
	}
	cout<<endl;
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--)	solve();
	return 0;
}
/**
 * Test Cases:-
 */