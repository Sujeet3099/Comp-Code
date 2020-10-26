#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Pashmak and Garden
 * link          :   https://codeforces.com/problemset/problem/459/A
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
	int x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
	int dist;
	dist = max(abs(x2-x1),abs(y2-y1));
	if(x1 == x2){
		cout<<x1+dist<<' '<<y1<<' '<<x2+dist<<' '<<y2<<endl;
	}
	else if(y1 == y2){
		cout<<x1<<' '<<y1+dist<<' '<<x2<<' '<<y2+dist<<endl;
	}
	else{
		double a = (abs((x2*x2)-(x1*x1)) + abs((y2*y2)-(y1*y1)));
		double d;
		d = (sqrt(a)/sqrt(2));
		cout<<d<<endl;
		cout<<floor(d)<<' '<<ceil(d)<<endl;
		if(floor(d)!=ceil(d)){
			cout<<-1<<endl;
			return;
		}
		dist = (int)d;
		cout<<x1+dist<<' '<<y1<<' '<<x1<<' '<<y1+dist<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 0 0 0 1
