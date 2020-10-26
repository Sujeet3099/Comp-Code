#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Minimum Product
 * link          :   https://codeforces.com/problemset/problem/1409/B
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
	ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
	if(a>b){
		swap(a,b);
		swap(x,y);
	}
	ll aa = a, bb = b,nn = n;
	ll res = 1e18;

	ll need = a-x;
	if(n>need)	a = x,n -= need;
	else	a -= n,n = 0;
	need = b-y;
	if(n>need)	b = y,n-=need;
	else	b -= n,n = 0;
	res = a*b;

	need = bb-y;
	if(nn>need)	bb = y,nn-=need;
	else	bb -= nn,nn = 0;
	need = aa-x;
	if(nn>need)	aa = x,nn -= need;
	else	aa -= nn,nn = 0;
	res = min(res,aa*bb);
	
	cout<<res<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 7
// 10 10 8 5 3
// 12 8 8 7 2
// 12343 43 4543 39 123212
// 1000000000 1000000000 1 1 1
// 1000000000 1000000000 1 1 1000000000
// 10 11 2 1 5
// 10 11 9 1 10
