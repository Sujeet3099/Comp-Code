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
	int p1,p2,q1,q2,r1,r2;
	cin>>p1>>p2>>q1>>q2;
	r1 = (q1-p1)+q1;
	r2 = (q2-p2)+q2;
	cout<<r1<<" "<<r2<<endl;
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
// 0 0 1 1
// 1 1 2 2
