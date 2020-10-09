#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Ilya and Queries
 * link          :   https://codeforces.com/problemset/problem/313/B
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
	string s;cin>>s;int m;cin>>m;
	int n = s.size();
	// int l,h;bool flow = false;
	// vector<pair<int,int> > v;int c = 0;
	// rep(i,0,n-1){
	// 	if(s[i]==s[i+1] && flow == false) l = i+1,h = i+2,flow = true,c++;
	// 	else if(s[i]==s[i+1] && flow == true && c>=1 && i==n-2) h = i+2,v.pb(mp(l,h)),flow = false;
	// 	else if(s[i]==s[i+1] && flow == true && c>=1) h = i+2;
	// 	else if(s[i]!=s[i+1] && flow == true && c>=1) v.pb(mp(l,h)),flow = false;
	// }
	// repA(i,v)	cout<<i.fi<<' '<<i.se<<endl;/
	vi res(n+2,0);
	rep(i,0,n){
		if(s[i]==s[i+1])	res[i+2]+=res[i+1]+1;
		else	res[i+2]+=res[i+1];
	}
	// repA(i,res)	cout<<i<<' ';cout<<endl;
	while(m--){
		int a,b;
		cin>>a>>b;
		cout<<abs(res[b]-res[a])<<endl;
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
// #..###
// 5
// 1 3
// 5 6
// 1 5
// 3 6
// 3 4
