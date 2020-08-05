#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */

#define llu long long
#define ll unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	ll n;
	cin>>n;
	ll res = 1;
	ll counter = 0;
	
	std::vector<ll> v{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,57};
	if(n >= 2){
		rep(i,0,17){
			if(res <= n){
				res *= v[i];
				counter++;
			}
			else if(res > n){
				--counter;
				break;
			}
		}
	}
	return counter;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 6
// 1
// 2
// 3
// 500
// 5000
// 10000000000
