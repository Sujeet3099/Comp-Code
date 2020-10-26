#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. GCD Compression
 * link          :   https://codeforces.com/problemset/problem/1370/B
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
	vi v(2*n),even,odd;
	vector<int> pos[1001];
	rep(i,0,2*n){
		cin>>v[i];
		pos[v[i]].pb(i+1);
		if(v[i]&1)	odd.pb(v[i]);
		else	even.pb(v[i]);
	}
	int c = 0;
	for(int i = 0; i < even.size(); i+=2){
		if(i+1<even.size()){
			cout<<pos[even[i]][0]<<' '<<pos[even[i+1]][0]<<endl;
			c++;
			pos[even[i]].erase(pos[even[i]].begin()+0);
			pos[even[i+1]].erase(pos[even[i+1]].begin()+0);
		}
		if(c==n-1)	return;
	}
	for(int i = 0; i < odd.size(); i+=2){
		if(i+1<odd.size()){
			cout<<pos[odd[i]][0]<<' '<<pos[odd[i+1]][0]<<endl;
			c++;
			pos[odd[i]].erase(pos[odd[i]].begin()+0);
			pos[odd[i+1]].erase(pos[odd[i+1]].begin()+0);
		}

		if(c==n-1)	return;
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
// 3
// 3
// 1 2 3 4 5 6
// 2
// 5 7 9 10
// 5
// 1 3 3 4 5 90 100 101 2 3
