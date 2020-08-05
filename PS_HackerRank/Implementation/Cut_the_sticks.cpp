#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Cut the sticks
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
	int n;
	cin>>n;
	std::vector<int> v(n);
	rep(i,0,n)
		cin>>v[i];
	sort(all(v));
	int temp = 0;
	rep(i,0,n){
		cout<<n-i<<endl;
		while(v[i] == v[i+1]){
			i++;
		}
	}
	cout<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 6
// 5 4 4 2 2 8
// 8
// 1 2 3 4 3 3 2 1