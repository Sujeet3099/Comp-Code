#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Road To Zero
 * link          :   https://codeforces.com/problemset/problem/1342/A
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
	ll x,y,a,b;cin>>x>>y>>a>>b;
	ll diffx = abs(x-0);
	ll diffy = abs(y-0);
	if(x>y)	swap(x,y);
	ll res = 0;
	res += abs(x-y)*a;
	if(ceil(b/2.0)>a)	res+=abs(x)*2*a;
	else	res+=abs(x)*b;
	cout<<res<<endl;
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
// 2
// 1 3
// 391 555
// 0 0
// 9 4
