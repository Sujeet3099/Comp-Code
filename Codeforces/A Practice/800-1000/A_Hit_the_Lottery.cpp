#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Hit the Lottery
 * link          :   https://codeforces.com/problemset/problem/996/A
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


// ll n, sum=0 ;
// int v[]={100,20,10,5,1};
//     cin >> n;
// int i=0;
// while(n!=0){
// sum+=n/v[i];
// n%=v[i];
// i++;
// }
// cout<<sum;

void solve(){
	int n;cin>>n;
	int temp,res = 0;
	if(n>=100){
		temp = n%100;
		res+=(n/100);
		n=temp;
	}
	if(n>=20){
		temp = n%20;
		res+=(n/20);
		n=temp;
	}
	if(n>=10){
		temp = n%10;
		res+=(n/10);
		n=temp;
	}
	if(n>=5){
		temp = n%5;
		res+=(n/5);
		n=temp;
	}
	if(n>=1){
		temp = n%1;
		res+=(n/1);
		n=temp;
	}
	cout<<res<<endl;
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
// 1000000000
