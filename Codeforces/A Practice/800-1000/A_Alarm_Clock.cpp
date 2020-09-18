#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Alarm Clock
 * link          :   https://codeforces.com/problemset/problem/1354/A
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
	ll a,b,c,d;cin>>a>>b>>c>>d;
	if(b>=a){
		cout<<b<<endl;return;
	}
	if(d>=c){
		cout<<"-1"<<endl;return;
	}
	double temp = c-d;
	ll ans = ceil((a-b)/temp);
	ll res = (ans*c)+b;
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
// 7
// 10 3 6 4
// 11 3 6 4
// 5 9 4 10
// 6 5 2 3
// 1 1 1 1
// 3947465 47342 338129 123123
// 234123843 13 361451236 361451000
