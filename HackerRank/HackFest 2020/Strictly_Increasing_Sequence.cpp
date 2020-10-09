#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Strictly Increasing Sequence
 * link          :   https://www.hackerrank.com/contests/hackerrank-hackfest-2020/challenges/strictly-increasing-sequence/problem
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
	map<int,int> m;
	rep(i,0,n){
		int a;cin>>a;
		m[a]++;
	}
	int same = 0,distinct = 0;
	repA(i,m)	if(i.se>1)	same+=((i.se)-1);
	distinct = m.size();
	if(same == 0)	cout<<"First"<<endl;
	else{
		int res = (same+distinct);
		if(res%2==0)	cout<<"Second"<<endl;
		else	cout<<"First"<<endl;
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