#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. BerSU Ball
 * link          :   https://codeforces.com/problemset/problem/489/B
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
	ll n,m;cin>>n;
	vi b(n);
	rep(i,0,n)	cin>>b[i];
	cin>>m;vi g(m);
	rep(i,0,m)	cin>>g[i];
	sort(all(b));
	sort(all(g));
	// repA(i,b)	cout<<i<<' ';cout<<endl;
	// repA(i,g)	cout<<i<<' ';cout<<endl;
	
	ll res = 0,k = 0;
	rep(i,0,n){
		if(k>=m)	break;
		rep(j,k,m){
			if(abs(b[i]-g[j])<=1){
				// cout<<b[i]<<' '<<g[j]<<' '<<j<<endl;
				res++;
				j++;
				k = j;
				break;
			}
		}
	}
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
// 5
// 1 1 1 1 1
// 3
// 1 2 3
