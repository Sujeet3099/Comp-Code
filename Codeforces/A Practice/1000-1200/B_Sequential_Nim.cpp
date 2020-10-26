// #include"bits/stdc++.h"
// 
#include<stdio.h>
#include<math.h>
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Sequential Nim
 * link          :   https://codeforces.com/problemset/problem/1382/B
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	double a = pow(10,2);
	printf("%lf\n",a);
	// cout<<pow(10,4)<<endl;
	return ;
}

int main(){
	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);
    // clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	solve();

	// clock_t end=clock();
	// cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
