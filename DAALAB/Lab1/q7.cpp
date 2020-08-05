#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program to swap pair of elements of an array of n integers from starting. If n is
					 odd, then last number will be remain unchanged.
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

int swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,0,n){
		cin>>v[i];
	}
	rep(i,0,n-1){
		if(n%2!=0 && i == n-2)
			break;
		swap(v[i],v[i+1]);
	}
	repA(i,v)
		cout<<i<<" ";
	return 0;
}
/**
 * Test Cases:-
 */
