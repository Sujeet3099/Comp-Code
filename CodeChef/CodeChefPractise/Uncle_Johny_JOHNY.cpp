#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Uncle Johny Problem Code: JOHNY 
 * link          :   https://www.codechef.com/problems/JOHNY
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

ll solve(){
	ll n,k;
	cin>>n;
	vll(n);
	rep(i,0,n) cin>>v[i];
	cin>>k;
	ll uncle = v[k-1];
	sort(all(v));
	ll index = find(all(v),uncle)-v.begin();
	return index+1;

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
// 3
// 4
// 1 3 4 2
// 2
// 5
// 1 2 3 9 4
// 5
// 5
// 1 2 3 9 4 
// 1