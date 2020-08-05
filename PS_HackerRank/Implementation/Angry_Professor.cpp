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
	int counter = 0;
	rep(i,0,n){
		cin>>v[i];
		if(v[i] <= 0)
			counter++;
	}
	cout<<(counter >= k ? "NO" : "YES")<<endl;

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
// 2
// 4 3
// -1 -3 4 2
// 4 2
// 0 -1 2 1
