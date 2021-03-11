#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Sequential Nim
 * link          :   https://codeforces.com/problemset/problem/1382/B
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
	bool first = false,second = true,det = true;
	vi v(n);
	int ones = 0;
	rep(i,0,n){
		cin>>v[i];
		if(v[i]==1 && det == true)	ones++;
		else	det = false;
	}
	if(ones == n){
		if(ones%2)	cout<<"First"<<endl;
		else	cout<<"Second"<<endl;
	}
	else{
		if(ones%2==0)	cout<<"First"<<endl;
		else	cout<<"Second"<<endl;
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
// 7
// 3
// 2 5 4
// 8
// 1 1 1 1 1 1 1 1
// 6
// 1 2 3 4 5 6
// 8
// 1 1 2 1 1 1 2 2
// 1
// 1000000000
// 5
// 1 2 2 1 1
// 3
// 1 1 1
