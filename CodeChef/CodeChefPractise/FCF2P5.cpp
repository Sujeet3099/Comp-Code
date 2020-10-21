#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B2 - Mayor Ram & Portals (Slightly Hard Version ) Problem Code: FCF2P5
 * link          :   https://www.codechef.com/problems/FCF2P5
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	int n,q;cin>>n>>q;
	vi v(n),pos(n),prefix(n);
	rep(i,0,n){
		cin>>v[i];
		v[i]--;
		pos[v[i]]=i;
	}
	rep(i,1,n)	prefix[i] = abs(pos[i]-pos[i-1]) + prefix[i-1];
	// repA(i,prefix)	cout<<i<<' ';cout<<endal;
	while(q--){
		int a,b;cin>>a>>b;
		a--,b--;
		int t1 = v[a];
		int t2 = v[b];
		cout<<abs(prefix[t2]-prefix[t1])<<endl;
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
// 4 2
// 1 3 2 4
// 1 2
// 4 2