#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Kuriyama Mirai's Stones
 * link          :   https://codeforces.com/problemset/problem/433/B
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
	ll n;cin>>n;
	vll a(n),b(n),sum(n+1),sortsum(n+1);
	rep(i,0,n)	cin>>a[i],b[i] = a[i];
	sort(all(b));
	rep(i,1,n+1){
		sum[i] = a[i-1]+sum[i-1];
		sortsum[i] = b[i-1]+sortsum[i-1];
	}
	// repA(i,sum)	cout<<i<<' ';cout<<endl;
	ll m;cin>>m;
	while(m--){
		ll q,l,r;cin>>q>>l>>r;
		if(q==1)	cout<<(sum[r]-sum[l-1])<<endl;
		else	cout<<(sortsum[r]-sortsum[l-1])<<endl;
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
// 6 4 2 7 2 7
// 3
// 2 3 6
// 1 3 4
// 1 1 6
