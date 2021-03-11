#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Not Not Easy Problem Code: CAC201
 * link          :   https://www.codechef.com/problems/CAC201
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
	ll n,q;cin>>n>>q;
	vll v(n),w(n+1);//,pos[2001],sum[2001];
	vector <vll> pos(2001,vll(1,0)), sum(2001,vll(1,0));
	rep(i,0,n)	cin>>v[i];
	rep(i,0,n)	cin>>w[i];
	ll add = 0,query,x,l,val,r;
	rep(i,0,n){
		pos[v[i]].pb(i+1);
		if(sum[v[i]].empty())	sum[v[i]].pb(0);
		sum[v[i]].pb(sum[v[i]].back()+w[i]);
	}
	
	while(q--){
		cin>>query;
		if(query==1){
			cin>>x; add+=x; }
		else{
			cin>>val>>l>>r;
		
			ll res = 0;
			auto left = lower_bound(all(pos[val]),l)-pos[val].begin();
			auto right = upper_bound(all(pos[val]),r)-pos[val].begin();
			l = --left,r = --right;
			res = sum[val][r]-sum[val][l];
			res += (r-l)*(add);
			cout<<res<<endl;
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
// 2
// 10 5
// 1 2 3 3 4 5 4 6 3 8
// 0 1 2 3 4 5 6 7 8 9
// 2 1 1 10
// 2 3 1 10
// 1 3
// 2 1 1 10
// 2 3 1 10
// 1 3
// 8
// 7
// 2 8 1 1
// 1 3
// 2 8 1 1