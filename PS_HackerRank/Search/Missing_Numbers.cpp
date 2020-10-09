#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Missing Numbers
 * link          :   https://www.hackerrank.com/challenges/missing-numbers/problem
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
	int n,m;cin>>n;
	vi a(n);
	set<int> c;
	map<int,int> m1,m2;
	rep(i,0,n){
		cin>>a[i];
		m1[a[i]]++;
	}
	cin>>m;
	vi b(m);
	rep(i,0,m){
		cin>>b[i];
		m2[b[i]]++;
	}
	//both approach works
	// repA(i,m2){
	// 	int t = i.se-m1[i.fi];
		// if(t>0)	c.insert(i.fi);
	// }
	sort(all(a));
	sort(all(b));
	for(int i = 0,j = 0; i < m; i++){
		if(a[j]==b[i] && j < n)	j++;
		else	c.insert(b[i]);
	}
	repA(i,c)	cout<<i<<' ';
	cout<<endl;
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
// 10
// 203 204 205 206 207 208 203 204 205 206
// 13
// 203 204 204 205 206 207 205 208 203 206 205 206 204