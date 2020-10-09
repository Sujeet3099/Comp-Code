#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Happy Ladybugs
 * link          :   https://www.hackerrank.com/challenges/happy-ladybugs/problem
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
	int n;string b;cin>>n>>b;
	map<char,int> m;
	int c = 0;bool res = true;
	rep(i,0,n){
		if(b[i]!='_'){
			m[b[i]]++;
			if( i>0 && b[i]!=b[i-1] && b[i]!=b[i+1] && i<n-1) res = false;
			else if(i==0 && b[i]!=b[i+1])	res = false;
			else if(i==n-1 && b[i]!=b[i-1])	res = false;
		}
		else	c++;
	}
	repA(i,m){
		if(i.se==1){
			cout<<"NO"<<endl;return;
		}
	}
	// if(c)	cout<<"YES"<<endl;
	if(c<1 && res == false)	cout<<"NO"<<endl;
	else	cout<<"YES"<<endl;
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
// 4
// 7
// RBY_YBR
// 6
// X_Y__X
// 2
// __
// 6
// B_RRBR