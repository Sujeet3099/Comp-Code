#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Power Sequence
 * link          :   https://codeforces.com/contest/1397/problem/B
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
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
	vll v(n);
	ll mx = -1e10;
	rep(i,0,n){
		cin>>v[i];
		mx = max(v[i],mx);
	}
	sort(all(v));
	ll temp1,temp2,res;
	rep(i,1,mx){
		temp1 = pow(i,n-1);
		if((mx-temp1) < 0 ){
			temp2 = pow(i-1,n-1);
			res = abs(mx-temp1) > abs(mx-temp2) ? i - 1 : i;
			break;
		}
	}
	ll mn = 1e18;
	rep(i,1,mx){
		temp1 = pow(i,n-1);
	}
	cout<<res<<' '<<temp1<<' '<<temp2<<endl;
	vll vec(n);
	rep(i,0,n){
		vec[i] = pow(res,i);
	}
	ll ans = 0;
	rep(i,0,n){
		ans += abs(v[i]-vec[i]);
	}
	cout<<ans<<endl;
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
// 3
// 1000000000 1000000000 1000000000
