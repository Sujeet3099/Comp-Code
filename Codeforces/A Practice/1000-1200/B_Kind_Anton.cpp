#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Kind Anton
 * link          :   https://codeforces.com/problemset/problem/1333/B
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
	vi a(n),b(n);
	int diff = 0;
	rep(i,0,n)	cin>>a[i];
	rep(i,0,n)	cin>>b[i];
	bool neg = false,pos = false,zero = false;
	rep(i,0,n){
		if(a[i]!=b[i]){
			if(a[i]>b[i] && neg==false){
				cout<<"NO"<<endl;
				return;
			}
			else if(a[i]<b[i] && pos == false){
				cout<<"NO"<<endl;
				return;
			}
		}
		if(a[i] == -1)	neg = true;
		else if(a[i] == 1)	pos = true;
		else if(a[i] == 0)	zero = true;
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
// 5
// 3
// 1 -1 0
// 1 1 -2
// 3
// 0 1 1
// 0 2 2
// 2
// 1 0
// 1 41
// 2
// -1 0
// -1 -41
// 5
// 0 1 -1 1 -1
// 1 1 -1 1 -1
