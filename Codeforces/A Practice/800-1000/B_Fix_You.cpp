#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Fix You
 * link          :   https://codeforces.com/problemset/problem/1391/B
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

int solve(){
	int n,m;cin>>n>>m;
	char a[n][m];
	int count = 0;
	rep(i,0,n){
		rep(j,0,m){
			cin>>a[i][j];
			if(i==n-1 && a[i][j]=='D') count++;
			if(j==m-1 && a[i][j]=='R') count++;
		}
	}
	
	return count;
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
// 4
// 3 3
// RRD
// DDR
// RRC
// 1 4
// DDDC
// 6 9
// RDDDDDRRR
// RRDDRRDDD
// RRDRDRRDR
// DDDDRDDRR
// DRRDRDDDR
// DDRDRRDDC
// 1 1
// C
