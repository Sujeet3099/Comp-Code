#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Remove Smallest
 * link          :   https://codeforces.com/contest/1399/problem/A
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

string solve(){
	int n;cin>>n;vi(n);
	rep(i,0,n)	cin>>v[i];
	sort(all(v));
	int absdiff;
	string res = "YES";
	rep(i,0,n-1){
		absdiff = abs(v[i]-v[i+1]);
		if(absdiff<=1)	continue;
		else{
			res = "NO";
			break;
		}
	}	
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	cout<<solve()<<endl;

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// 3
// 1 2 2
// 4
// 5 5 5 5
// 3
// 1 2 4
// 4
// 1 3 4 4
// 1
// 100