#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Array Cancellation
 * link          :   https://codeforces.com/contest/1405/problem/B
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

	int n;
    cin >> n;
    int a[n];
    rep(i, 0, n){
        cin >> a[i];
    }
    long long ans = 0, sum = 0;
    rep(i, 0, n){
        sum += a[i];
        ans = min(ans, sum);
    }
    cout << -ans << endl;

	// int n;
	// cin >> n;
	// int a[n], ans = 0;
	// for(int i = 0; i < n; ++i) {
	// 	cin >> a[i];
	// 	if(i == 0) {
	// 		if(a[i] < 0) {
	// 			ans = max(ans, -a[i]);
	// 		}
	// 		continue;
	// 	}	
	// 	a[i] += a[i - 1];
	// 	if(a[i] < 0) {
	// 		ans = max(ans, -a[i]);
	// 	}
	// }
	// cout << ans << '\n';
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
