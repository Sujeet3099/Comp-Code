#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Level Statistics
 * link          :   https://codeforces.com/problemset/problem/1334/A
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
	vector<pair<int,int>> v(n);
	rep(i,0,n){
		int a,b;cin>>a>>b;
		v[i] = {a,b};
	}
	if(v[0].fi<v[0].se){
		cout<<"NO"<<endl;
		return;
	}
	rep(i,1,n){
		int a = v[i].fi - v[i-1].fi;
		int b = v[i].se - v[i-1].se;
		if(v[i].fi>v[i-1].fi && v[i].se>=v[i-1].se && v[i].fi>=v[i].se && a>=b)	continue;
		else if(v[i].fi==v[i-1].fi && v[i].se==v[i-1].se && v[i].fi>=v[i].se && a>=b)	continue;
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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
// 3
// 0 0
// 1 1
// 1 2
// 2
// 1 0
// 1000 3
// 4
// 10 1
// 15 2
// 10 2
// 15 2
// 1
// 765 432
// 2
// 4 4
// 4 3
// 5
// 0 0
// 1 0
// 1 0
// 1 0
// 1 0
