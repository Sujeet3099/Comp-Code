#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Minimum Product
 * link          :   https://codeforces.com/contest/1409/problem/B
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
	// ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
	int a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	long long ans = 1e18;
	for (int i = 0; i < 2; ++i) {
		int da = min(n, a - x);
		int db = min(n - da, b - y);
		ans = min(ans, (a - da) * 1ll * (b - db));
		swap(a, b);
		swap(x, y);
	}
	cout << ans << endl;
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
// 10 10 8 5 3
// 12 8 8 7 2
// 12343 43 4543 39 123212
// 1000000000 1000000000 1 1 1
// 1000000000 1000000000 1 1 1000000000
// 10 11 2 1 5
// 10 11 9 1 10
