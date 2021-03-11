#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Repetitions
 * link          :   https://cses.fi/problemset/task/1069
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
	string s;cin>>s;
	int mx = 1,c = 1;
	rep(i,1,s.size()){
		if(s[i]==s[i-1])	c++;
		else	c = 1;
		mx = max(mx,c);
	}
	cout<<mx;
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
// ATTCGGGA

#include<bits/stdc++.h>
using namespace std;

#define FASTIO1 ios_base::sync_with_stdio(false)
#define FASTIO2 cin.tie(NULL),cout.tie(NULL)
#define count_1(p) __builtin_popcountll(p)
#define count_0(p) __builtin_ctzll(p)
#define all(x) (x).begin(),(x).end()
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const ll inf=999999999;
const ll mod=1e9+7;
bool tc=true;

void solve()
{
}

int main() 
{
    FASTIO1;
    FASTIO2;
    clock_t start=clock();
    ll t=1; 
    if(tc) cin>>t;
    while(t--)
        solve();
    cerr<<fixed<<setprecision(6);
    cerr<<(double)(clock()-start)/CLOCKS_PER_SEC<<endl;
    return 0;
}