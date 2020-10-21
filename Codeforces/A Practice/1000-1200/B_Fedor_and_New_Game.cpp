#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Fedor and New Game
 * link          :   https://codeforces.com/problemset/problem/467/B
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
	int n,m,k;cin>>n>>m>>k;
	vi v(m+1);
	rep(i,0,m+1)	cin>>v[i];
	int fedor = v[m];
	string fed = bitset<32>(fedor).to_string();
	int cnt = 0,res = 0;
	// cout<<fed<<endl;
	rep(i,0,m){
		string temp = bitset<32>(v[i]).to_string();
		// cout<<temp<<endl;
		rep(j,0,temp.size()){
			if(fed[j]!=temp[j])	cnt++;
		}
		if(cnt<=k)	res++;
		cnt = 0;
	}
	cout<<res<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 3 3 3
// 1
// 2
// 3
// 4
