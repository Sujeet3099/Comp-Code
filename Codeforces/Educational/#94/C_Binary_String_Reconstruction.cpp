#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Binary String Reconstruction
 * link          :   https://codeforces.com/contest/1400/problem/C
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
	
	string s,w;cin>>w;
	int x;cin>>x;
	int n = w.size();
	rep(i,0,n){
		if( (x<i && w[i-x] == '1') || (i+x<=n && w[i+x]=='1') )
			s+='1';
		else
			s+='0';
	}
	if(s==""){
		cout<<"-1"<<endl;
		return;
	}
	cout<<s<<endl;
	return;
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
