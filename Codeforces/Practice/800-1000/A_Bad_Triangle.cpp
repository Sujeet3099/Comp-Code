#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Bad Triangle
 * link          :   https://codeforces.com/problemset/problem/1398/A
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
	int n,a=-1,b=-1,c=-1;cin>>n;
	vi v(n);
	rep(i,0,n)	cin>>v[i];
	// repA(i,v)	cout<<i<<' ';
	if(v[0]+v[1]<=v[n-1])
		cout<<"1 "<<"2 "<<n<<endl;
	else	cout<<"-1"<<endl;
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
// 3
// 7
// 4 6 11 11 15 18 20
// 4
// 10 10 10 11
// 3
// 1 1 1000000000
