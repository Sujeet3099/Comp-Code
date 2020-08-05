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

int solve(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	rep(i,0,n){
		cin>>v[i];
	}
	int score = 100;
	for(int i = 0; i < n; i=(i+k)%n){
		if(v[i] == 1)
			score-=2;
		score--;
		if(i == n-1){
			score--;
			if(v[0] == 1)
				score-=2;
		}
	}
	return score;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 8 2
// 0 0 1 0 0 1 1 0
// or
// 10 3
// 1 1 1 0 1 1 0 0 0 0