#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Juggling Letters
 * link          :   https://codeforces.com/contest/1397/problem/A
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}
void solve(){
	int n;cin>>n;
	vector<string> v(n);
	map<char,int> m;
	rep(i,0,n)	cin>>v[i];
	// rep(i,0,n)	cout<<v[i]<<endl;
	rep(i,0,n){
		rep(j,0,v[i].size()){
			m[v[i][j]]++;
			// cout<<v[i][j];
		}
		// cout<<endl;
	}
	// repA(i,m)	cout<<i.first<<' '<<i.second<<endl;
	repA(i,m){
		if(i.second%n!=0){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	// cout<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 4
// 2
// caa
// cbb
// 3
// cba
// cba
// cbb
// 4
// ccab
// cbac
// bca
// acbcc
// 4
// acb
// caf
// c
// cbafc
