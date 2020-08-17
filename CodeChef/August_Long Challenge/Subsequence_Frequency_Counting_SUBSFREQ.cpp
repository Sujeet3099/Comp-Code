#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Subsequence Frequency Counting Problem Code: SUBSFREQ
 * link          :   https://www.codechef.com/AUG20B/problems/SUBSFREQ
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

ll mod_power(ll base,ll exponent,ll mod){
	if( mod == 1)
		return 0;
	else{
		ll res = 1;
		base = base % mod;
		while(exponent > 0){
			if(exponent % 2 == 1)
				res = (res * base) % mod;
			exponent = exponent >> 1;
			base = (base * base) % mod;
		}
		return res;
	}
}

ull solve(){
	ull n,temp,res,modnum = 1000000007;
	cin>>n;
	vector<ull> v,result;
	rep(i,0,n){
		cin>>temp;
		v.pb(temp);
	}
	sort(all(v));
	rep(i,0,n){
		temp = v[i];
		res = mod_power(2,n-temp,modnum);
		result.pb(res);
	}
	rep(i,0,n){
		cout<<result[i]<<' ';
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		// cout<<solve()<<endl;
		solve();
		cout<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
