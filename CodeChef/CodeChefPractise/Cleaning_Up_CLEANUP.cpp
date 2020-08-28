#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Cleaning Up Problem Code: CLEANUP
 * link          :   https://www.codechef.com/problems/CLEANUP
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> v(m),chef,assist;
	// cout<<m<<endl;
	rep(i,0,m)	cin>>v[i];
	// repA(i,v) cout<<i<<' ';
	bool det = true;
	sort(all(v));
	rep(i,1,n+1){
		if(find(all(v),i)==v.end()){
			if(det == true){
				chef.pb(i);
				det = false;
			}
			else if(det == false){
				assist.pb(i);
				det = true;
			}
		}
	}
	repA(i,chef)	cout<<i<<' ';
	cout<<endl;
	repA(i,assist)	cout<<i<<' ';
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		solve();
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 6 3
// 2 4 1
// 3 2
// 3 2
// 8 2
// 3 8