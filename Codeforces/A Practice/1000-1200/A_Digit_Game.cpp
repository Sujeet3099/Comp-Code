#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Digit Game
 * link          :   https://codeforces.com/problemset/problem/1419/A
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
	string s;cin>>s;
	int odd = 0,even = 0;
	rep(i,0,n){
		if((i+1)%2!=0 && ((int)s[i]-'0')%2==0)	even++;
		if((i+1)%2==0 && ((int)s[i]-'0')%2!=0)	odd++;
	}
	if(n%2){
		if(even<(n/2)+1)	cout<<1<<endl;
		else	cout<<2<<endl;
	}
	else{
		if(odd<n/2)	cout<<2<<endl;
		else	cout<<1<<endl;
	}
	// cout<<even<<' '<<odd<<endl;
	// if(even<odd)	cout<<2<<endl;
	// else	cout<<1<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 1
// 2
// 1
// 3
// 3
// 102
// 4
// 2069
