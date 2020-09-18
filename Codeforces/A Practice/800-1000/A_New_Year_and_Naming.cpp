#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. New Year and Naming
 * link          :   https://codeforces.com/problemset/problem/1284/A
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
	int n,m;cin>>n>>m;
	vector<string> s(n+1),t(m+1);
	rep(i,1,n+1)	cin>>s[i];
	rep(i,1,m+1)	cin>>t[i];
	int q;cin>>q;
	while(q--){
		int y;cin>>y;
		string res="";
		int sn = y%(n)==0?n:y%(n);
		int tn = y%(m)==0?m:y%(m);
		res+=s[sn];
		res+=t[tn];
		cout<<res<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 10 12
// sin im gye gap eul byeong jeong mu gi gyeong
// yu sul hae ja chuk in myo jin sa o mi sin
// 14
// 1
// 2
// 3
// 4
// 10
// 11
// 12
// 13
// 73
// 2016
// 2017
// 2018
// 2019
// 2020
