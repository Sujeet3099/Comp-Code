#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Matrix Game
 * link          :   https://codeforces.com/problemset/problem/1365/A
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
	int n,m;cin>>n>>m;
	int v[n][m];
	rep(i,0,n)	rep(j,0,m)	cin>>v[i][j];
	bool vivek = true,ashish = false,det;
	rep(i,0,n){
		rep(j,0,m){
			det = true;
			rep(k,0,n){
				if(v[k][j]){
					det = false;
					break;
				}
			}
			rep(l,0,m){
				if(v[i][l]){
					det = false;
					break;
				}
			}
			if(det){
				if(vivek)	vivek = false,ashish = true;
				else	vivek = true,ashish = false;
				v[i][j] = 1;
			}
		}
	}
	// rep(i,0,n){
	// 	rep(j,0,m)	cout<<v[i][j]<<' ';
	// 	cout<<endl;
	// }
	if(vivek)	cout<<"Vivek"<<endl;
	else	cout<<"Ashish"<<endl;
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
// 2 2
// 0 0
// 0 0
// 2 2
// 0 0
// 0 1
// 2 3
// 1 0 1
// 1 1 0
// 3 3
// 1 0 0
// 0 0 0
// 1 0 0
