#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Dominant Piranha
 * link          :   https://codeforces.com/problemset/problem/1433/C
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
	int res = -1;
	vi v(n);
	int mx = -1,pos = -1;
	rep(i,0,n)	cin>>v[i],mx = max(mx,v[i]);
	rep(i,0,n){
		if(v[i]==mx){
			if (i > 0 && v[i-1]<mx) pos = i;
			if(i < n-1 && v[i+1]<mx) pos = i;
		}
	}
	if(pos == -1)	cout<<-1<<endl;
	else	cout<<pos+1<<endl;
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
// 5
// 5 3 4 4 5
// 3
// 1 1 1
// 5
// 4 4 3 4 4
// 5
// 5 5 4 3 2
// 3
// 1 1 2
// 5
// 5 4 3 5 5
