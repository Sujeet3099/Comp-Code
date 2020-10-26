#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Card Constructions
 * link          :   https://codeforces.com/problemset/problem/1345/B
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

ll ap(int n){
	ll res = ((2+(n-1))*n)/2;
	return res;
}

void solve(){
	ll n;cin>>n;
	ll c = 0;
	while(n>=2){
		ll ans = 0,i = 1;
		while(ans<n){
			ans	 = (3*i*i + i)/2;
			if(ans>n){
				i--;
				break;
			}
			if(ans==n)	break;
			i++;
		}
		ans	 = (3*i*i + i)/2;
		n-=ans;
		c++;
	}
	cout<<c<<endl;
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
// 3
// 14
// 15
// 24
// 1
