#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Exercising Walk
 * link          :   https://codeforces.com/problemset/problem/1332/A
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
	ll a,b,c,d;cin>>a>>b>>c>>d;
	ll x,y,x1,y1,x2,y2;cin>>x>>y>>x1>>y1>>x2>>y2;
	x+=-a+b, y+=-c+d;
	if (x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0))    cout<<"Yes\n";
    else    cout<<"No\n";
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
// 6
// 3 2 2 2
// 0 0 -2 -2 2 2
// 3 1 4 1
// 0 0 -1 -1 1 1
// 1 1 1 1
// 1 1 1 1 1 1
// 0 0 0 1
// 0 0 0 0 0 1
// 5 1 1 1
// 0 0 -100 -100 0 100
// 1 1 5 1
// 0 0 -100 -100 100 0
