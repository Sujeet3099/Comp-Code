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
	int n,k,q;
	cin>>n>>k>>q;
	deque<int> d;
	int temp;
	rep(i,0,n){
		cin>>temp;
		d.push_back(temp);
	}
	
	while(k--){
		d.push_front(d.back());
		d.pop_back();
	}
	int query;
	while(q--){
		cin>>query;
		// auto it = find(d.begin(),d.end(),query) - d.begin();
		// cout<<it<<endl;
		cout<<d.at(query)<<endl;
	}

	
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
