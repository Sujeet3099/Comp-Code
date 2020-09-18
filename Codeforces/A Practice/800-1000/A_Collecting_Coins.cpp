#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Collecting Coins
 * link          :   https://codeforces.com/problemset/problem/1294/A
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
	vi v(3);
	int mx = -1;
	rep(i,0,3){
		cin>>v[i];
		mx = max(mx,v[i]);
	}
	int n;cin>>n;
	int res = 0;
	rep(i,0,3){
		res+=abs(mx-v[i]);
	}
	// cout<<mx<<' '<<res<<endl;
	if(res>n)	cout<<"NO"<<endl;
	else{
		if((n-res)%3==0)	cout<<"YES"<<endl;
		else	cout<<"NO"<<endl;
	}
	// cout<<res<<endl;
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
// 5
// 5 3 2 8
// 100 101 102 105
// 3 2 1 100000000
// 10 20 15 14
// 101 101 101 3
