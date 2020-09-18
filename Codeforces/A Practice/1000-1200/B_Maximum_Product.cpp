#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Maximum Product
 * link          :   https://codeforces.com/problemset/problem/1406/B
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
bool compare(ll n,ll m){
	return abs(n)>abs(m);
}

void solve(){
	ll n;cin>>n;
	vll v(n);
	ll mx = -1e9;
	rep(i,0,n){
		cin>>v[i];
		mx = max(mx,v[i]);
	}
	sort(all(v),compare);
	ll mult = 1;
	if(mx<0){
		per(i,n-5,n)	mult*=v[i];
		cout<<mult<<'\n';return;
	}
	rep(i,0,5)	mult*=v[i];
	rep(i,5,n){
		for(int j=0;j<5;j++){
	        long long tmp=v[i];
	        for(int k=0;k<5;k++){
	            if(k!=j)tmp*=v[k];
	        }
	        mult=max(mult,tmp);
	    }
	}
	cout<<mult<<'\n';
	repA(i,v)	cout<<i<<' ';
	cout<<'\n';
	
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
// 4
// 5
// -1 -2 -3 -4 -5
// 6
// -1 -2 -3 1 2 -1
// 6
// -1 0 0 0 -1 -1
// 6
// -9 -7 -5 -3 -2 1
