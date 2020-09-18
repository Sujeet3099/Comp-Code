#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Kana and Dragon Quest game
 * link          :   https://codeforces.com/problemset/problem/1337/B
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
	int x,n,m;cin>>x>>n>>m;
	if(m==0){
		cout<<"NO"<<endl;
		return;
	}
	rep(i,0,n){
		if(x<=10){
			cout<<"YES"<<endl;
			return;
		}
		x = (x/2)+10;
	}
	rep(i,0,m){
		x = x-10;
		if(x<=0){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;

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
// 7
// 100 3 4
// 189 3 4
// 64 2 3
// 63 2 3
// 30 27 7
// 10 9 1
// 69117 21 2
