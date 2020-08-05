#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program to rearrange the elements of an array of n integers such that all even
					numbers are followed by all odd numbers. How many different ways you can solve this
					problem. Write your approaches & strategy for solving this problem.
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
	int n;
	cin>>n;
	vector<int> ve,vo,v;
	// vector<int> even,odd;
	int temp;
	rep(i,0,n){
		cin>>temp;
		if(temp%2 == 0)
			ve.pb(temp);
		else if(temp%2!=0)
			vo.pb(temp);
	}
	v = ve;
	v.insert(v.end(),vo.begin(),vo.end());
	repA(i,v)
		cout<<i<<" ";
	return 0;
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
//input
// 10
// 1 2 3 4 5 6 7 8 9
//output
//2 4 6 8 1 3 5 7 9 9 