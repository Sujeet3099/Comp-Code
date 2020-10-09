#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Strong Password
 * link          :   https://www.hackerrank.com/challenges/strong-password/problem
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
	int p;cin>>p;
	string s;cin>>s;
	int n = 1,l = 1,u = 1,sp = 1;
	rep(i,0,s.size()){
		if(s[i]<='9'&&s[i]>='0')	n = 0;
		else if(s[i]<='z'&&s[i]>='a')	l = 0;
		else if(s[i]<='Z'&&s[i]>='A')	u = 0;
		else	sp = 0;
	}
	int temp = (n+l+u+sp);
	p += (n+l+u+sp);
	if(p>=6)	cout<<temp<<endl;
	else	cout<<temp+(6-p)<<endl;
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
// 11
// #HackerRank