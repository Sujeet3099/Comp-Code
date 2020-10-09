#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
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
	int n,k;cin>>n>>k;
	string s;cin>>s;
	int c = 0;
	rep(i,0,n){
		if(i==0){
			if(s[i]=='1' && s[i+1]=='0' )	c++;

		}
		else if(i==n-1){
			if(s[i]=='1' && s[i-1]=='0' )	c++;
		}
		else{
			if(s[i]=='1' && (s[i+1]=='0'))	c++;
			if(s[i]=='1' && s[i-1]=='0')	c++;
			if(s[i]=='0' && (s[i+1]=='1') && s[i-1]=='1' )	c--;
		}
	}
	if(c-k>0)	cout<<c-k<<endl;
	else	cout<<0<<endl;
	// cout<<c<<endl;
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
