#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
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
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,0,n){
		cin>>v[i];
	}
	sort(all(v));
	// repA(i,v)
	// 	cout<<i<<" ";
	// cout<<endl;
	string res = "YES";
	rep(i,0,n-1){
		if(abs(v[i]-v[i+1]) > 1 ){
			res = "NO";
			break;
		}
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
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