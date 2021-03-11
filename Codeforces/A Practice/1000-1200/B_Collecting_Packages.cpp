#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Collecting Packages
 * link          :   https://codeforces.com/problemset/problem/1294/B
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

bool comp(pair<int,int> a,pair<int,int> b){
	if(a.fi == b.fi)	return a.se<b.se;
	else	return a.fi<b.fi;
}

void solve(){
	int n,a,b;cin>>n;
	vector<pair<int,int>> v(n);
	rep(i,0,n)	cin>>a>>b,v[i] = {a,b};
	sort(all(v),comp);
	string s = "";
	int x = 0,y=0;
	rep(i,0,n){
		while(v[i].fi>x)	x++,s+="R";
		while(v[i].se>y)	y++,s+="U";
		if(v[i].fi<x || v[i].se<y){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl<<s<<endl;
	// repA(i,v)	cout<<i.fi<<' '<<i.se<<endl;cout<<endl;
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
// 3
// 5
// 1 3
// 1 2
// 3 3
// 5 5
// 4 3
// 2
// 1 0
// 0 1
// 1
// 4 3
