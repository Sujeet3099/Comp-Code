#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Racing Horses Problem Code: HORSES
 * link          :   https://www.codechef.com/problems/HORSES
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

int solve(){
	ll n;
	cin>>n;
	vll(n);
	rep(i,0,n) cin>>v[i];
	sort(all(v));
	ll mn;
	// repA(i,v) cout<<i<<" ";
	// cout<<endl;
	rep(i,0,n-1){
		if(i == 0)	mn = v[i+1]-v[i];
		else	mn = min(mn,v[i+1]-v[i]);
	}
	return mn;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 1
// 5
// 4 9 1 32 13
