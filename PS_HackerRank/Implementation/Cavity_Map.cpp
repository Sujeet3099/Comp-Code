#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Cavity Map
 * link          :   https://www.hackerrank.com/challenges/cavity-map/problem
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	int n;cin>>n;
	char ch[n][n];
	rep(i,0,n)	rep(j,0,n)	cin>>ch[i][j];
	rep(i,1,n-1){
		rep(j,1,n-1){
			if(ch[i+1][j]<ch[i][j] && ch[i-1][j]<ch[i][j] && ch[i][j+1]<ch[i][j] && ch[i][j-1]<ch[i][j])	ch[i][j]='X';
		}
	}
	rep(i,0,n){
		rep(j,0,n)	cout<<ch[i][j];
		cout<<endl;
	}
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
// 4
// 1112
// 1912
// 1892
// 1234