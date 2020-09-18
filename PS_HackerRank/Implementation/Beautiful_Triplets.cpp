#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Beautiful Triplets
 * link          :   https://www.hackerrank.com/challenges/beautiful-triplets/problem
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
	int n,d;cin>>n>>d;
	vi(n);
	set<int> s;
	rep(i,0,n){
		cin>>v[i];
		s.insert(v[i]);
	}
	int i = 0;
	int limit = v[n-1],count = 0;
	while(i<n){
		int t1,t2,t3;
		t1 = v[i];
		t2 = t1+d;
		t3 = t2+d;
		if(t3 > limit || i>=n)	break;
		if(s.find(t2)!=s.end() && s.find(t3)!=s.end())	count++;
		i++;
	}
	cout<<count<<endl;
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 7 3
// 1 2 4 5 7 8 10