#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. A and B and Compilation Errors
 * link          :   https://codeforces.com/problemset/problem/519/B
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
	int n;cin>>n;
	vi a(n),b(n-1),c(n-2);
	rep(i,0,n)	cin>>a[i];
	rep(i,0,n-1)	cin>>b[i];
	sort(all(a));
	sort(all(b));
	rep(i,0,n-1){
		if(a[i]!=b[i]){
			cout<<a[i]<<endl;
			break;
		}
		else if (i == n-2 && a[i]==b[i]) cout<<a[n-1]<<endl;
	}
	rep(i,0,n-2)	cin>>c[i];
	sort(all(c));
	rep(i,0,n-2){
		if(b[i]!=c[i]){
			cout<<b[i]<<endl;
			break;
		}
		else if (i == n-3 && b[i]==c[i]) cout<<b[n-2]<<endl;
	}
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
// 6
// 1 4 3 3 5 7
// 3 7 5 4 3
// 4 3 7 5
