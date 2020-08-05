#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program to display an array of n integers (n>1), where at every index of the
					array should contain the product of all elements in the array except the element at the
					given index. Solve this problem by taking single loop and without an additional array.
 * 
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
	std::vector<int> v(n),vp(n);
	int p = 1;
	rep(i,0,n){
		cin>>v[i];
		p *= v[i];
		vp[i] = p;
	}
	repA(i,vp)
		cout<<i<<" ";
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
