#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Symmetric Matrix
 * link          :   https://codeforces.com/problemset/problem/1426/B
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
	int n,m;cin>>n>>m;
	int diagsym = 0;
	rep(i,0,n){
		int a,b,c,d;cin>>a>>b>>c>>d;
		if(b == c)	diagsym++;
	}
	if(m%2){
		cout<<"NO"<<endl;return;
	}
	if(diagsym)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
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
// 6
// 3 4
// 1 2
// 5 6
// 5 7
// 7 4
// 8 9
// 9 8
// 2 5
// 1 1
// 1 1
// 2 2
// 2 2
// 1 100
// 10 10
// 10 10
// 1 2
// 4 5
// 8 4
// 2 2
// 1 1
// 1 1
// 1 2
// 3 4
// 1 2
// 1 1
// 1 1
