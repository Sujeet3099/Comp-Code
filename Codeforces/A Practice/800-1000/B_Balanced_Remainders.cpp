#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Balanced Remainders
 * link          :   https://codeforces.com/problemset/problem/1490/B
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
	int n; cin>>n;
	vi v(n);
	vi rem(3);
	rep(i,0,n)	cin>>v[i],rem[v[i]%3]++;

	int res = 0;

	while(*min_element(all(rem)) != n/3){
		rep(i,0,3){
			if(rem[i] > n/3)	res++,rem[i]--,rem[(i+1)%3]++;
		}
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
// 4
// 6
// 0 2 5 5 4 8
// 6
// 2 0 2 1 0 0
// 9
// 7 1 3 4 2 10 3 9 6
// 6
// 0 1 2 3 4 5
