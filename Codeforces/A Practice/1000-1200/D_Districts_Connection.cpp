#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   D. Districts Connection
 * link          :   https://codeforces.com/problemset/problem/1433/D
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
	int n,t;cin>>n;
	vi v(n);
	vector<pair<int,int>> vp;
	rep(i,0,n)	cin>>v[i];
	int j = -1;
	rep(i,1,n)	if(v[i]!=v[0])	vp.pb({1,i+1}),j = i;
	rep(i,1,n)	if(v[i]==v[0])	vp.pb({j+1,i+1});
	if(j == -1)	cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		repA(i,vp)	cout<<i.fi<<' '<<i.se<<endl;
	}

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
// 5
// 1 2 2 1 3
// 3
// 1 1 1
// 4
// 1 1000 101 1000
// 4
// 1 2 3 4
