#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Yet Another Array Restoration
 * link          :   https://codeforces.com/contest/1409/problem/C
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
	int n,x,y;cin>>n>>x>>y;
	vi v;
	v.pb(x);
	int res = y-x;
	int div = n-2+1;
	int count=0;
	if(n==2){
		cout<<x<<' '<<y<<endl;return;
	}
	while(1){
		if(res%div==0){
			count = res/div;
			break;
		}
		else div--;
	}
	int counter = x;
	while(x!=y){
		int temp = x+=count;
		v.pb(temp);
	}
	while(v.size()<n){
		if(counter-count>0){
			counter -= count;
			v.pb(counter);
		}
		else{
			y+=count;
			v.pb(y);
		}
	}
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
// 5
// 2 1 49
// 5 20 50
// 6 20 50
// 5 3 8
// 9 13 22
