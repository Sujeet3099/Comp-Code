#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Two Arrays And Swaps
 * link          :   https://codeforces.com/problemset/problem/1353/B
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
	int n,k;cin>>n>>k;
	deque<int> a(n),b(n);
	rep(i,0,n)	cin>>a[i];
	rep(i,0,n)	cin>>b[i];
	sort(all(b),greater<int>());
	ll sum = 0;
	rep(i,0,k){
		a.pb(b[i]);
	}
	sort(all(a),greater<int>());
	rep(i,0,n)	sum+=a[i];
	cout<<sum<<endl;
	return;
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
// 5
// 2 1
// 1 2
// 3 4
// 5 5
// 5 5 6 6 5
// 1 2 5 4 3
// 5 3
// 1 2 3 4 5
// 10 9 10 10 9
// 4 0
// 2 2 4 3
// 2 4 2 3
// 4 4
// 1 2 2 1
// 4 4 5 4
