#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Modified Kaprekar Numbers
 * link          :   https://www.hackerrank.com/challenges/kaprekar-numbers/problem
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
	ll p,q,count = 0,sq,chk1,chk2;
	cin>>p>>q;
	string temp1,temp2,left,right;
	for(ll i = p; i <= q; i++){
		if(i < 9){
			cout<<(i == 1 ? "1 ": "");
			continue;
		}
		sq = i*i;
		temp1 = to_string(i);
		int j = temp1.size();
		temp2 = to_string(sq);
		int k = temp2.size()-j;
		right = temp2.substr(k,j);
		left = temp2.substr(0,k);
		chk1 = stoll(left);
		chk2 = stoll(right);
		// cout<<"++"<<left<<" ==="<<right<<"===== "<<endl;
		if(chk1 + chk2 == i && chk2 != 0 && chk1 != 0){
			cout<<i<<' ';
			count++;
		}
	}
	if(count == 0)
		cout<<"INVALID RANGE";
	cout<<endl;
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
// 1
// 100
