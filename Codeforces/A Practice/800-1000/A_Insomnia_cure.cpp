#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Insomnia cure
 * link          :   https://codeforces.com/problemset/problem/148/A
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
	int k,l,m,n,d;cin>>k>>l>>m>>n>>d;
	vi v(d+1,1);
	int tempk;
	rep(i,1,d+1){
		if((k*i)<=d)	v[k*i]=0;
		if((l*i)<=d)	v[l*i]=0;
		if((m*i)<=d)	v[m*i]=0;
		if((n*i)<=d)	v[n*i]=0;
		// else	break;
	}
	int count = 0;
	rep(i,1,d+1){
		if(v[i]==0)	count++;
	}
	cout<<count<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 2
// 3
// 4
// 5
// 24
