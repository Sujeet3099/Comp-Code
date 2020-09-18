#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Amusing Joke
 * link          :   https://codeforces.com/problemset/problem/141/A
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
	string n,c,op;cin>>n>>c>>op;
	map<char,int> m,mp;
	rep(i,0,n.size()){
		m[n[i]]++;
	}
	rep(i,0,c.size()){
		m[c[i]]++;
	}
	rep(i,0,op.size()){
		mp[op[i]]++;
	}
	auto itr = m.begin();
	if(mp.size()!=m.size()){
		cout<<"NO"<<endl;
		return;
	}
	for(auto it = mp.begin();it!=mp.end();it++){
		if(it->fi != itr->first || it->se != itr->se){
			cout<<"NO"<<endl;
			return;
		}
		else{
			itr++;
		}
	}
	cout<<"YES"<<endl;
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
// PAPAINOEL
// JOULUPUKKI
// JOULNAPAOILELUPUKKI
