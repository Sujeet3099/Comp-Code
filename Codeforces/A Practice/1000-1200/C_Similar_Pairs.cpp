#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Similar Pairs
 * link          :   https://codeforces.com/problemset/problem/1360/C
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
	vi v(n);
	int even = 0,odd = 0;
	rep(i,0,n){
		cin>>v[i];
		if(v[i]&1)	odd++;
		else	even++;
	}
	if(even%2==0 && odd%2 == 0){
		cout<<"YES"<<endl;
		return;
	}
	sort(all(v));
	int cnt = 0;
	rep(i,1,n)	if(abs(v[i]-v[i-1]==1))	cnt++;
	if(cnt)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
	// cout<<even<<' '<<odd<<' '<<cnt<<endl;
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
// 4
// 11 14 16 12
// 2
// 1 8
// 4
// 1 1 1 1
// 4
// 1 2 5 6
// 2
// 12 13
// 6
// 1 6 3 10 5 8
// 6
// 1 12 3 10 5 8
