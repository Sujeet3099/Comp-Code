#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Arrival of the General
 * link          :   https://codeforces.com/problemset/problem/144/A
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
	ll n; cin>>n;
	vector <ll> v(n);
	for(ll i=0;i<n;i++) cin>>v[i];
	auto it1=max_element(all(v))-v.begin();
	reverse(all(v));
	auto it2=min_element(all(v))-v.begin();
	cout<<it1+it2-(it1>=(n-it2));
	
	// ll n;cin>>n;
	// vi v(n);
	// ll mx = -1,mn = 1e9,posmx=n,posmn=0;
	// rep(i,0,n){
	// 	cin>>v[i];
	// 	if(v[i]==mx){
	// 		posmx = min(posmx,i);
	// 	}
	// 	else if(v[i]>mx){
	// 		mx = v[i];
	// 		posmx = i;
	// 	}
	// 	if(v[i]==mn){
	// 		posmn = max(posmn,i);
	// 	}
	// 	else if(v[i]<mn){
	// 		mn = v[i];
	// 		posmn = i;
	// 	}
	// }
	// ll res = 0;
	// if(posmx>posmn)	{
	// 	res+=(posmx);
	// 	res+=(n-1-posmn-1);
	// }
	// else{
	// 	res+=posmx;
	// 	res+=(n-1-posmn);
	// }
	// cout<<res<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 4
// 33 44 11 22
