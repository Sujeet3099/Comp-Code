#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	ll n,k,temp,count = 0;
	cin>>n>>k;
	temp = 0;
	ll rev;
	// vector<ll>v(n);
	ll v[n];
	rep(i,0,n){
		cin>>v[i];
		count++;
		if(count == k){
			rev = temp+k;
			reverse(v+temp,v+rev);
			count = 0;
			temp = i;
			temp++;
		}
		if(n-i<k){
			rev = temp + count;
			reverse(v+temp,v+rev);
		}
	}
	rep(i,0,n){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 5 3
// 1 2 3 4 5
// 6 2
// 10 20 30 40 50 60