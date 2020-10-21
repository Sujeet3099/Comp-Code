#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Two Arrays
 * link          :   https://codeforces.com/problemset/problem/1288/C
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

ll mod = 1e9+7;
int fact(int n); 
  
ll nCr(ll n,ll k){
	k = min(k,n-k);
	ll ans = 1;
	rep(i,1,k+1){
		ans *= ((n-i+1)%mod);
		ans /= i;
	}
	return ans%mod;
}
// ll nCr(ll n,ll r){
// 	r = min(n-1,2*m);
// 	ll res = 1;
// 	rep(i,0,r){
// 		res *= n-i-1;
// 	}
// }

void solve(){
	ll n,m;cin>>n>>m;
	ll res = nCr(n+2*m-1,2*m);
	
	cout<<res<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
