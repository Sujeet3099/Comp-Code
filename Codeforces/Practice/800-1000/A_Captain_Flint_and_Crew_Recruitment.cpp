#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Captain Flint and Crew Recruitment
 * link          :   https://codeforces.com/problemset/problem/1388/A
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
	string s = "YES";
	int a=6,b=10,c=14;
	if(n<=30)
		s = "NO";
	if(s=="YES"&&(n==36||n==40||n==44))
		cout<<"YES"<<endl<<"6 10 15 "<<n-31<<endl;
	else if(s=="YES")
		cout<<"YES"<<endl<<"6 10 14 "<<n-30<<endl;
	else
		cout<<"NO"<<endl;
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
// 7
// 7
// 23
// 31
// 36
// 44
// 100
// 258
