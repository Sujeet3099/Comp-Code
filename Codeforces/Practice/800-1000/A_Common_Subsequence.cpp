#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Common Subsequence
 * link          :   https://codeforces.com/problemset/problem/1382/A
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
	int n,m;cin>>n>>m;
	map<int,int> a,b;
	int temp;
	rep(i,0,n){
		cin>>temp;
		a[temp]++;
	}	
	rep(i,0,m){
		cin>>temp;
		b[temp]++;
	}
	auto itr = a.end();
	itr--;
	// repA(i,a){
	for(auto it = a.begin(); it!=a.end();it++){
		if(b.find(it->first)!=b.end()){
			cout<<"YES"<<endl<<"1 "<<it->first<<endl;
			return;
		}
		else if(it== itr){
			cout<<"NO"<<endl;
			return;
		}
	}
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
// 4 5
// 10 8 6 4
// 1 2 3 4 5
// 1 1
// 3
// 3
// 1 1
// 3
// 2
// 5 3
// 1000 2 2 2 3
// 3 1 5
// 5 5
// 1 2 3 4 5
// 1 2 3 4 5
