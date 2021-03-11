#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. K-th Largest Value
 * link          :   https://codeforces.com/problemset/problem/1491/A
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
	int n,q;cin>>n>>q;
	int one = 0, zero = 0;
	vi v(n);
	rep(i,0,n){
		cin>>v[i];
		if(v[i] == 1)	one++;
		else	zero++;
	}

	while(q--){
		int t,x;
		cin>>t>>x;
		if(t == 1){
			x--;
			if(v[x] == 0)	v[x] = 1,one++,zero--;
			else	v[x] = 0,one--,zero++;
		}else{
			if(x > one)	cout<<0<<'\n';
			else	cout<<1<<'\n';
		}
	}
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    // cin>>test;
    while(test--)    solve();

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
// 5 5
// 1 1 0 1 0
// 2 3
// 1 2
// 2 3
// 2 1
// 2 5
