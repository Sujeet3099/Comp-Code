#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Board Moves
 * link          :   https://codeforces.com/problemset/problem/1353/C
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
	ll n;cin>>n;
	// ll no,uno,count = 0;
	// ll counter = n/2;
	// for(int i = 1;i<=counter;i++){
	// 		no = ((n-2)*4)*i;
	// 		uno = 4*(i*i);
	// 		n-=2;
	// 		count += (no + uno);
	// }
	// cout<<count<<endl;
	n-=1;
	n/=2;
	ll res = (n*(n+1)*(2*n+1)*8)/6;
	cout<<res<<endl;;
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
// 3
// 1
// 5
// 499993
