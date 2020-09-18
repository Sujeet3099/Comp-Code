#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Make It Good
 * link          :   https://codeforces.com/contest/1385/problem/C
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
	vi v(n);
	rep(i,0,n)	cin>>v[i];
	int pos = n - 1;
	while (pos > 0 && v[pos - 1] >= v[pos]) --pos;
	while (pos > 0 && v[pos - 1] <= v[pos]) --pos;

	// int pos = n-1;bool flow = true;
	// per(i,1,n){
	// 	if(flow == true && v[i-1]>v[i]){
	// 		pos = i;
	// 		flow = false;
	// 	}
	// 	else if(v[i-1]<=v[i] && flow == false){
	// 		pos--;
	// 	}
	// }
	// cout<<pos<<endl;
	// buggy and not generalised:_||^
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
// 5
// 4
// 1 2 3 4
// 7
// 4 3 3 8 4 5 2
// 3
// 1 1 1
// 7
// 1 3 1 4 5 3 2
// 5
// 5 4 3 2 3
