#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program to store random numbers into an array of n integers, where the 
 * 					array must cotains some duplicates. Do the following:
					a) Find out the total number of duplicate elements.
					b) Find out the most repeating element in the array.
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
	ll n;
	cin>>n;
	vector<ll> v(n);
	srand(time(0)); 
	rep(i,0,n){
		v[rand()%n+1]++;
	}
	repA(i,v){
		cout<<i<<" ";
	}
	cout<<endl;
	ll duplicates =0 ;
	ll mx = 0;
	rep(i,0,n){
		if(v[i]>1){
			mx = max(mx,v[i]);
			duplicates+=v[i];
		}
	}

	cout<<"Total number of Repetetive Number is:- "<<duplicates<<endl
		<<"Largest Repetetive Number is :- "<<mx<<endl;
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
//no input needed program generates it automatically
//output (output will change always with each instance of run)
// Total number of Repetetive Number is:- 20604
// Largest Repetetive Number is :- 8
