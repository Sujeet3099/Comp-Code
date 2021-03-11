#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Dense Array
 * link          :   https://codeforces.com/problemset/problem/1490/A
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
	int n;cin>>n;
	vi v(n);

	rep(i,0,n)	cin>>v[i];
	int res = 0;

	rep(i,0,n-1){
		float mn = min(v[i],v[i+1]);
		float mx = max(v[i],v[i+1]);
		while(ceil(mx / mn) > 2)	res++,mn*=2;
	}
	cout<<res<<'\n';
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    cin>>test;
    while(test--)    solve();

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
// 6
// 4
// 4 2 10 1
// 2
// 1 3
// 2
// 6 1
// 3
// 1 4 2
// 5
// 1 2 3 4 3
// 12
// 4 31 25 50 30 20 34 46 42 16 15 16
