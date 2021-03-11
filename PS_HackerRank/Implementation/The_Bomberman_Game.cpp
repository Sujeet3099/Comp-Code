#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   The Bomberman Game
 * link          :   https://www.hackerrank.com/challenges/bomber-man/problem
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
	int r,c,n;cin>>r>>c>>n;
	vector<vector<char>> v(r+2,vector<char>(c+2)),ans(r+2,vector<char> (c+2,'O'));
	rep(i,1,r+1)	rep(j,1,c+1)	cin>>v[i][j];
	int p = (n/3);
	// p%=2;
	// if(p==0)	p++;
	// while(p--){
		rep(i,1,r+1){
			rep(j,1,c+1){
				if(v[i][j]=='O'){
					ans[i][j] = '.';
					ans[i-1][j] = '.';
					ans[i][j-1] = '.';
					ans[i+1][j] = '.';
					ans[i][j+1] = '.';
					// ans[i-1][j-1] = '.';
					// ans[i+1][j+1] = '.';
				}
			}
		}
	// 	rep(i,1,r+1)	rep(j,1,c+1)	v[i][j] = ans[i][j];
	// }
	
	rep(i,1,r+1){
		rep(j,1,c+1)	cout<<ans[i][j];
		cout<<endl;
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
// 6 7 3
// .......
// ...O...
// ....O..
// .......
// OO.....
// OO.....