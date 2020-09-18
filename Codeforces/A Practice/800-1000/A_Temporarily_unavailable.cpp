#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Temporarily unavailable
 * link          :   https://codeforces.com/problemset/problem/1282/A
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
	int a,b,c,r;cin>>a>>b>>c>>r;
	if(a>b)	swap(a,b);
	int leftB = max(c-r,a);
	int rightB = min(c+r,b);
	// cout<<leftB<<' '<<rightB<<endl;
	int res = abs((b-a)-max(0,rightB-leftB));
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
// 9
// 1 10 7 1
// 3 3 3 0
// 8 2 10 4
// 8 2 10 100
// -10 20 -17 2
// -3 2 2 0
// -3 1 2 0
// 2 3 2 3
// -1 3 -2 2

