#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. New Theatre Square
 * link          :   https://codeforces.com/problemset/problem/1359/B
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
	ll n,m,x,y;cin>>n>>m>>x>>y;
	ll x1 = 0,x2=0;
	y = min(y,2*x);
	char t;
	int  count = 0;
	rep(i,0,n){
		rep(j,0,m){
			cin>>t;
			if(t=='.'){
				count++;
				if(count==2){
					x2++;
					x1--;
					count=0;
				}
				else{
					x1++;
				}
			}
			else
				count=0;
		}
		count = 0;
	}
	// cout<<x1<<' '<<x2<<"=="<<endl;
	ll ans = x1*x;
	ans += x2*y;
	cout<<ans<<endl;
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
// 4
// 1 1 10 1
// .
// 1 2 10 1
// ..
// 2 1 10 1
// .
// .
// 3 3 3 7
// ..*
// *..
// .*.
