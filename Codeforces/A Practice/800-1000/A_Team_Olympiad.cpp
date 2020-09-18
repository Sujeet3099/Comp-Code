#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Team Olympiad
 * link          :   https://codeforces.com/problemset/problem/490/A
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
	int n,p=0,m=0,s=0;cin>>n;
	int temp;
	vi math,pro,sport;
	rep(i,1,n+1){
		cin>>temp;
		if(temp==1){
			p++;
			pro.pb(i);
		}
		else if(temp==2){
			m++;
			math.pb(i);
		}
		else{
			s++;
			sport.pb(i);
		}
	}
	int res = min(p,m);
	res = min(res,s);
	cout<<res<<endl;
	rep(i,0,res){
		cout<<pro[i]<<' '<<math[i]<<' '<<sport[i]<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 7
// 1 3 1 3 2 1 2
