// #include"bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Add and Divide
 * link          :   https://codeforces.com/problemset/problem/1485/A
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

#define MOD 1000000007

void solve(){
	int a,b;cin>>a>>b;
	int res = 1e9;

	rep(i,b,b+31){
		if(i == 1)	continue;
		int c = (i-b);
		int z = a;
		while(z>0){
			z = z/i;
			c++;
		}
		res = min(res,c);
	}
	cout<<res<<'\n';
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    int n = 5;
    int mat[n][n][n];
    memset(mat,-1,sizeof(mat));
    rep(i,0,n){
    	rep(j,0,n){
    		rep(k,0,n){
    			cout<<mat[i][j][k]<<' ';
    		}
    		cout<<endl;
    	}
    	cout<<endl;
    }
    // cin>>test;
    // while(test--)    solve();

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
// 6
// 9 2
// 1337 1
// 1 1
// 50000000 4
// 991026972 997
// 1234 5678
