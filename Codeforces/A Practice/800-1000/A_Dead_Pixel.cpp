#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Dead Pixel
 * link          :   https://codeforces.com/problemset/problem/1315/A
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	int a,b,x,y;cin>>a>>b>>x>>y;
	// int xco = max(x+1,b-(x+1));
	// int yco = max(y+1,a-(y+1));
	int res1 = y*a;
	int res2 = (b-y-1)*a;
	int res3 = x*b;
	int res4 = (a-x-1)*b;
	int res = 0;
	res  = max(res,res1);
	res  = max(res,res2);
	res  = max(res,res3);
	res  = max(res,res4);
	cout<<res<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 6
// 8 8 0 0
// 1 10 0 3
// 17 31 10 4
// 2 1 0 0
// 5 10 3 9
// 10 10 4 8
