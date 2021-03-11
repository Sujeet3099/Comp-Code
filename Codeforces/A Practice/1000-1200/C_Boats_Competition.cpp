#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Boats Competition
 * link          :   https://codeforces.com/problemset/problem/1399/C
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
	set<int> s;
	rep(i,0,n)	cin>>v[i];
	map<int,int> m;
	rep(i,0,n){
		rep(j,i,n){
			if(i==j)	continue;
			else	m[v[i]+v[j]]++;
		}
	}
	int mx = 0, w = 0;
	// repA(i,m)	cout<<i.fi<<' '<<i.se<<endl;
	repA(i,m)	if(i.se>mx)	w = i.fi,mx = i.se;
	vi weight;
	repA(i,m)	if(i.se == mx)	weight.pb(i.fi);
	// cout<<w<<endl;
	int c = 0,res = 0;
	sort(all(v));
	// repA(z,weight){
	rep(z,2,2*n+1){
		c = 0;
		for(int i = 0,j = n-1; i < j; ){
			if(v[i]+v[j]<z)	i++;
			else if(v[i]+v[j]>z)	j--;
			else	i++,j--,c++;
		}
		// cout<<c<<' '<<z<<endl;
		res = max(res,c);
	}
	// repA(i,weight)	cout<<i<<' ';cout<<endl;
	cout<<res<<endl;
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
// 5
// 1 2 3 4 5
// 8
// 6 6 6 6 6 6 8 8
// 8
// 1 2 2 1 2 1 1 2
// 3
// 1 3 3
// 6
// 1 1 3 4 2 2
