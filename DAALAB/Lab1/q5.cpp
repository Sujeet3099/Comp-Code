#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Let A be n*n square matrix array. WAP by using appropriate user defined functions for
					the following:
					a) Find the number of nonzero elements in A
					b) Find the sum of the elements above the leading diagonal.
					c) Display the elements below the minor diagonal.
					d) Find the product of the diagonal elements.
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<=n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	ll n;
	cin>>n;
	vector<vector<ll> > v(n+1,vector<ll> (n+1));
	rep(i,1,n){
		rep(j,1,n){
			cin>>v[i][j];
		}
	}
	ll counter = 0;
	rep(i,1,n){
		rep(j,1,n){
			if(v[i][j] != 0)
				counter++;
		}
	}
	cout<<"Number of Non-Zero numbers = "<<counter<<endl;
	counter = 0;
	rep(i,1,n){
		rep(j,1,n){
			if(i > j)
				counter+=v[i][j];
		}
	}
	cout<<"SUM of Uppper triangle elements = "<<counter<<endl;
	counter = 1;
	rep(i,1,n){
		rep(j,1,n){
			if(i == j)
				counter*=v[i][j];
		}
	}
	cout<<"Product Of Diagonal elements = "<<counter<<endl;
	counter = 1;
	cout<<"ELements Below Minor Diagonal = "<<endl;
	rep(i,1,n){
		rep(j,1,n){
			if(i+j > n+1)
				cout<<v[i][j];
		}
		cout<<endl;
	}

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
// 6
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 0 
// 1 2 3 4 5 6 
// 
// output
// Number of Non-Zero numbers = 35
// SUM of Uppper triangle elements = 35
// Product Of Diagonal elements = 720
// ELements Below Minor Diagonal = 

// 6
// 56
// 456
// 3450
// 23456