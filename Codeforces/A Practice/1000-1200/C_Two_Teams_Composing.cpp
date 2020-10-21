#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Two Teams Composing
 * link          :   https://codeforces.com/problemset/problem/1335/C
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
	vi v(n);
	map<int,int> m;
	rep(i,0,n)	cin>>v[i],m[v[i]]++;
	int mx = 0;
	repA(i,m)	mx = max(i.se,mx);

	if((int)m.size() == mx)	mx--;
	mx = min((int)m.size(),mx);
	mx = min(mx,n/2);
	cout<<mx<<endl;
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
// 7
// 4 2 4 1 4 3 4
// 5
// 2 1 5 4 3
// 1
// 1
// 4
// 1 1 1 3
