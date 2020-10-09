#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Taxi
 * link          :   https://codeforces.com/problemset/problem/158/B
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
	map<int,int> m;
	int temp;
	rep(i,0,n){
		cin>>temp;
		m[temp]++;
	}
	// int res = m[4];
	// res += floor((m[3]*3 + m[1]*1)/4.0);
	// temp = (m[3]*3 + m[1]*1)%4;
	// cout<<res<<' '<<temp<<endl;
	// res += ceil((m[2]*2 + temp*1)/4.0);
	
	// repA(i,m)	cout<<i.fi<<' '<<i.se<<endl;
	int res = m[4],one = m[1],two = m[2],three = m[3];
	temp = min(m[1],m[3]);
	res += temp;
	one -= temp;three -= temp;
	res += three;
	temp = min(one/2,two);
	res += temp;
	one -= temp*2;two -= temp;
	if(one>0 and two>0){
		res+= ceil((two*2 + one*1)/4.0);
	}
	else {
		if(two>0)	res += ceil(two/2.0);
		if(one>0)	res += ceil(one/4.0);
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
// 8
// 2 3 4 4 2 1 3 1
