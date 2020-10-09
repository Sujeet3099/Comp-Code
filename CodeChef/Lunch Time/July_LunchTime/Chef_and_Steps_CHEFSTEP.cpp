#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	int n,k;
	cin>>n>>k;	
	vector<int> v(n);
	rep(i,0,n){
		cin>>v[i];
		cout<<(v[i] % k == 0 ? "1" : "0");
	}
	cout<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
	
	solve();

	}
	
	return 0;
}
/**
 * Test Cases:-
 */
// 1
// 5 3
// 12
// 13
// 18
// 20
// 27216