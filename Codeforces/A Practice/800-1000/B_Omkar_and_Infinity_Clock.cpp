#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Omkar and Infinity Clock
 * link          :   https://codeforces.com/problemset/problem/1392/B
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

void solve(){
	ll n,k,mx;cin>>n>>k;
	vll v(n);
	rep(i,0,n){
		cin>>v[i];
		if(i==0)
			mx=v[i];
		mx = max(mx,v[i]);
	}
	ll mx2;
	rep(i,0,n){
		v[i]=mx-v[i];
		if(i==0)	mx2=v[i];
		mx2=max(mx2,v[i]);
	}
	if(k&1==1){
		rep(i,0,n)	cout<<v[i]<<" ";
	}
	else	rep(i,0,n)	cout<<mx2-v[i]<<' ';
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		solve();
		cout<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 2 1
// -199 192
// 5 19
// 5 -1 4 2 0
// 1 2
// 69
