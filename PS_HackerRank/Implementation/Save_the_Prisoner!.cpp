#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<=n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	int n,m,s;
	cin>>n>>m>>s;
	int res;
	res = (m % n + s - 1);
	cout<<(res % n ? res % n : n)<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    // clock_t start=clock();
    
	ll test;
	cin>>test;
	while(test--){
	
	solve();

	}
	// clock_t end=clock();
 //    cout<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
}
/**
 * Test Cases:-
 */
// 6
// 7 19 2
// 3 7 3
// 5 2 1
// 5 2 2
// 19 7 2
// 6 6 1