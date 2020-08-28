#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Coin Flip Problem Code: CONFLIP
 * link          :   https://www.codechef.com/problems/CONFLIP
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

void solve(){
	ll g;
	cin>>g;
	while(g--){
		ll i,n,q,h,t,ans = 0,result = 0;
		cin>>i>>n>>q;
		// if(i = q){
		// 	t = ceil(n/2.0);
		// 	h = floor(n/2.0);
		// }
		// else if(i = 2){
		// 	h = ceil(n/2.0);
		// 	t = floor(n/2.0);
		// }
		// cout<<(q==1?h:t)<<endl;
		// 
		if (n % 2 == 0 || i == q)	cout<<(n/2)<<endl;
		else	cout<<(n/2)+1<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		solve();
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 1
// 2
// 1 5 1
// 1 5 2
