#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program to find out the second smallest and second largest element stored in an
					 array of n integers. n is the user input. The array takes input through random number
					 generation within a given range. How many different ways you can solve this problem.
					 Write your approaches & strategy for solving this problem.
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
	std::vector<int> v(n);
	srand(time(0));
	rep(i,0,n){
		v[i] = rand();
	}
	sort(all(v));
	cout<<"The second smallest :- "<<v[1]<<endl
	<<"The second largest element :- "<<v[n-2]<<endl;

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
