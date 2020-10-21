#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   2D Array - DS
 * link          :   https://www.hackerrank.com/challenges/2d-array/problem
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	int v[6][6],mx = INT_MIN,res = 0;
	rep(i,0,6)	rep(j,0,6)	cin>>v[i][j];
	rep(i,0,4){
		rep(j,0,4){
			res += (v[i][j] + v[i][j+1] + v[i][j+2] + v[i+1][j+1] + 
				v[i+2][j] + v[i+2][j+1] + v[i+2][j+2]);
			mx = max(mx,res);
			res = 0;
		}
	}
	cout<<mx<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// -9 -9 -9  1 1 1 
//  0 -9  0  4 3 2
// -9 -9 -9  1 2 3
//  0  0  8  6 6 0
//  0  0  0 -2 0 0
//  0  0  1  2 4 0