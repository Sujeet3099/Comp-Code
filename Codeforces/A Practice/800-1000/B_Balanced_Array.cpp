#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Balanced Array
 * link          :   https://codeforces.com/problemset/problem/1343/B
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
	ll n;cin>>n;
	if(n%4!=0){
		cout<<"NO"<<endl;
		return;
	}
	vi v;
	ll even = 0,odd =1,ans1=even,ans2 = odd;
	rep(i,0,(n/2)){
		even+=2;
		ans1+=even;
		v.pb(even);
	}
	rep(i,0,(n/2)-1){
		if(i==0){
			odd = 1;
			v.pb(odd);
			odd+=2;
		}
		else{
			v.pb(odd);
			ans2+=odd;
			odd+=2;
		}
	}
	v.pb(ans1-ans2);
	cout<<"YES"<<endl;
	repA(i,v)	cout<<i<<' ';
	cout<<endl;

	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
