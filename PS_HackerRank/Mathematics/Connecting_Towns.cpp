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
	int n;
	cin>>n;
	ll temp;
	ll routes = 1;
	rep(i,0,n-1){
		cin>>temp;
		routes = (routes%1234567)*(temp%1234567);
		routes%1234567;		
	}
	return routes%1234567;
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
// 2
// 3
// 1 3
// 4
// 2 2 2
