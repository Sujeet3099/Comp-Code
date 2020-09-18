#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Omkar and Password
 * link          :   https://codeforces.com/problemset/problem/1392/A
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

bool check(vector<ll>&v){
	ll n = v.size()-1;
	rep(i,0,n){
		if(v[i]!=v[i+1])	return false;
	}
	return true;
}

int solve(){
	int n;cin>>n;
	vll v(n);
	rep(i,0,n)	cin>>v[i];
	sort(all(v));
	return v[0]==v[n-1]?n:1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	cout<<solve()<<endl;

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 4
// 2 1 3 1
// 2
// 420 420
