#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Restore the Permutation by Merger
 * link          :   https://codeforces.com/problemset/problem/1385/B
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

void solve(){
	int n;cin>>n;
	int p = 2*n;
	vll v(p);
	rep(i,0,p)	cin>>v[i];
	int count = 0;vll dup;
	rep(i,0,p){
		// if(find(all(dup),v[i])!=dup.end()){
		// 	i+=count-1;
		// 	dup.clear();
		// 	count=0;
		// }
		if(find(all(dup),v[i])==dup.end()){
			dup.pb(v[i]);
			cout<<v[i]<<' ';
		}
		// else{
		// 	dup.pb(v[i]);
		// 	cout<<v[i]<<' ';
		// 	count++;
		// }
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 5
// 2
// 1 1 2 2
// 4
// 1 3 1 4 3 4 2 2
// 5
// 1 2 1 2 3 4 3 5 4 5
// 3
// 1 2 3 1 2 3
// 4
// 2 3 2 4 1 3 4 1
