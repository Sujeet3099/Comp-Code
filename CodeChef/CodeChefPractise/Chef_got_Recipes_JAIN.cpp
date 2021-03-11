#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Chef got Recipes Problem Code: JAIN
 * link          :   https://www.codechef.com/problems/JAIN
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
	vll v(32);
	int n;cin>>n;
	string s;
	rep(i,0,n){
		cin>>s;
		int mask = 0;
		repA(c,s){
			if(c == 'a')	mask = mask | (1<<0);
			if(c == 'e')	mask = mask | (1<<1);
			if(c == 'i')	mask = mask | (1<<2);
			if(c == 'o')	mask = mask | (1<<3);
			if(c == 'u')	mask = mask | (1<<4);
		}
		v[mask]++;
	}
	ll res = 0;
	rep(i,1,32){
		rep(j,i+1,32){
			if((i | j) == 31)
				res += v[j]*v[i];
		}
	}
	if(v[31]>=1)	res += ((v[31]*(v[31]-1))/2);
	cout<<res<<endl;
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
// 1
// 3
// aaooaoaooa
// uiieieiieieuuu
// aeioooeeiiaiei