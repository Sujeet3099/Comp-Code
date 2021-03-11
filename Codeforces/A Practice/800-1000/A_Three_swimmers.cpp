#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Three swimmers
 * link          :   https://codeforces.com/problemset/problem/1492/A
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007

ll mCeil(ll a,ll b){
	return (a % b ? a/b + 1: a/b );
}

void solve(){
	ll p,a,b,c;cin>>p>>a>>b>>c;

	cout<<min(min(mCeil(p,a)*a,mCeil(p,b)*b),mCeil(p,c)*c)-p<<endl;
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    cin>>test;
    while(test--)    solve();

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
// 4
// 9 5 4 8
// 2 6 10 9
// 10 2 5 10
// 10 9 9 9
