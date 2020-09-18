#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. I Wanna Be the Guy
 * link          :   https://codeforces.com/problemset/problem/469/A
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
	int n,p,q;cin>>n>>p;
	int temp;
	map<int,int> m;
	rep(i,0,p){
		cin>>temp;
		m[temp]++;
	}
	cin>>q;
	rep(i,0,q){
		cin>>temp;
		m[temp]++;
	}
	int j = 1;
	repA(i,m){
		if(i.first==j)	j++;
		else{
			cout<<"Oh, my keyboard!"<<endl;
			return;
		}
	}
	int chk = m.size();
	if(chk==n)	cout<<"I become the guy."<<endl;
	else	cout<<"Oh, my keyboard!"<<endl;
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
// 4
// 3 1 2 3
// 2 2 3
