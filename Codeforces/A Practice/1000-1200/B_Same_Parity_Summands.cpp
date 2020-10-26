#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Same Parity Summands
 * link          :   https://codeforces.com/problemset/problem/1352/B
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
	ll n,k;cin>>n>>k;
	if(n&1 && k%2==0){
		cout<<"NO"<<endl;return;
	}
	if(n&1){
		if(n<k){
			cout<<"NO"<<endl;
			return;
		}
		else{
			cout<<"YES"<<endl;
			ll t = k-1;
			while(t--){
				cout<<1<<' ';
			}
			cout<<n-(k-1)<<endl;
		}
	}
	else{
		if(n<2*k && (k&1)){
			cout<<"NO"<<endl;return;
		}
		else if(n<2*k && k%2==0){
			if(n<k){
				cout<<"NO"<<endl;return;
			}
			cout<<"YES"<<endl;
			ll t = k-1;
			while(t--){
				cout<<1<<' ';
			}
			cout<<n-(k-1)<<endl;
		}
		else{
			cout<<"YES"<<endl;
			ll t = k-1;
			while(t--){
				cout<<2<<' ';
			}
			cout<<(n-((k-1)*2))<<endl;
		}
	}
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
// 10 3
// 100 4
// 8 7
// 97 2
// 8 8
// 3 10
// 5 3
// 1000000000 9
