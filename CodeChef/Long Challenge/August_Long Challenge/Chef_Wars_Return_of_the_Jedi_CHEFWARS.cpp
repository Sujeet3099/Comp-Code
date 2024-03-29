#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Chef Wars - Return of the Jedi Problem Code: CHEFWARS
 * link          :   https://www.codechef.com/AUG20B/problems/CHEFWARS
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

int solve(){
	int h,p;
	cin>>h>>p;
	int temp = ceil(log2(p)),res = 0;
	while(p){
		h -= p;
		p /= 2;
		if(h <= 0){
			res = 1;
			break;
		}
		// cout<<h<<" "<<p<<endl;
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
// 2
// 10 4
// 10 8