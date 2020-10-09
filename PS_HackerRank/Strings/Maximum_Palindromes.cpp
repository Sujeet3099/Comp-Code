#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Maximum Palindromes
 * link          :   https://www.hackerrank.com/challenges/maximum-palindromes/problem
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


ll mod = 1e9+7;
ll fact(ll n){
	if(n==1)	return 1;
	n%=mod;
	return (n*fact(n-1))%mod;
}

void solve(){
	string s;cin>>s;
	ll q;cin>>q;
	while(q--){
		ll l,r;cin>>l>>r;
		string temp = s.substr(l-1,((r-l)+1));
		cout<<temp<<endl;
		map<char,ll> m;
		rep(i,0,temp.size()){
			m[temp[i]]++;
		}
		ll two = 0,one = 0;
		repA(i,m){
			if(i.se%2==0)	two += (i.se/2);
			else{
				two += (i.se/2);
				one++;
			}
		}
		ll res = fact(two);
		res%=mod;
		res*=one==0?1:one;
		cout<<res<<endl;
	}
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
