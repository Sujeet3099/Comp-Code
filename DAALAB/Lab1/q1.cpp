#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program to store random numbers into an array of n integers and 
 * 					 then find out the smallest and largest number stored in it. n is the user input.
 * link          :   
 */


#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll n;
	cin>>n;
	vector<int> v(n);
	srand(time(0)); 
	rep(i,0,n){
		v[i] = rand()%n+1;
	}
	repA(i,v){
		cout<<i<<" ";
	}
	sort(v.begin(),v.end());
	cout<<endl<<"MAX :- "<<v[0]<<endl<<"MIN :- "<<v[n-1]<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 11
// 1 1 4 4 5 2 2 2 6 9