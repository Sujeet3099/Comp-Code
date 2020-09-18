#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Johnny and Ancient Computer
 * link          :   https://codeforces.com/problemset/problem/1362/A
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
int oddLeft(ll a){
	while(a%2==0)	a/=2;
	return a;
}

void solve(){
	ll a,b;cin>>a>>b;
	ll temp1 = min(a,b),temp2 = max(a,b);
	ll count = 0;
	if(oddLeft(temp1)!=oddLeft(temp2)){
		cout<<"-1"<<endl;
		return;
	}
	temp2 /= temp1;
	while(temp2%8==0){
		temp2/=8;
		count++;
	}
	if(temp2>1) count++;
	cout<<count<<endl;
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
// 10
// 10 5
// 11 44
// 17 21
// 1 1
// 96 3
// 2 128
// 1001 1100611139403776
// 1000000000000000000 1000000000000000000
// 7 1
// 10 8
