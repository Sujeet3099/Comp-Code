#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Three Pairwise Maximums
 * link          :   https://codeforces.com/problemset/problem/1385/A
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
	int x,y,z;cin>>x>>y>>z;
	if(x == y && y == z)
		cout<<"YES "<<endl<<x<<' '<<x<<' '<<x<<endl;
	else if(x == z && x > y && x>=2)
		cout<<"YES "<<endl<<x<<' '<<y<<' '<<y<<endl;
	else if(y == z && y > x && y>=2)
		cout<<"YES "<<endl<<y<<' '<<x<<' '<<x<<endl;
	else if(x == y && x > z && x>=2)
		cout<<"YES "<<endl<<x<<' '<<z<<' '<<z<<endl;
	else 
		cout<<"NO"<<endl;
	return ;
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
// 3 2 3
// 100 100 100
// 50 49 49
// 10 30 20
// 1 1000000000 1000000000
