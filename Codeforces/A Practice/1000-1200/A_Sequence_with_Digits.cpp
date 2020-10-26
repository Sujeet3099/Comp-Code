#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Sequence with Digits
 * link          :   https://codeforces.com/problemset/problem/1355/A
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
	string s;cin>>s;ll n;cin>>n;
	rep(i,1,n){
		string t = s;
		sort(all(t));
		ll mn = (ll)(t[0]-'0');
		if(mn == 0){
			cout<<s<<endl;return;
		}
		ll mx = (ll)(t[t.size()-1]-'0');;
		ll add = (mn*mx)+stoll(s);
		string p = to_string(add);
		s = p;
	}
	cout<<s<<endl;

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
// 8
// 1 4
// 487 1
// 487 2
// 487 3
// 487 4
// 487 5
// 487 6
// 487 7
