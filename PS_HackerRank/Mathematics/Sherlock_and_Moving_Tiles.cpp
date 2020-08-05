#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Sherlock and Moving Tiles
 * link          :   https://www.hackerrank.com/challenges/sherlock-and-moving-tiles/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
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
	
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    ll l,s1,s2;
	cin>>l>>s1>>s2;
	double d,L;
	ll test = 1;
	cin>>test;
	while(test--){
		ll q;
		cin>>q;
		L = sqrt(2)*l;
		d = sqrt(q) * sqrt(2);
		// printf("%.10lf\n",(L - d)/fabs(s2-s1));
		cout<<fixed<<(L-d)/abs(s2-s1)<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 10 1 2
// 2
// 50
// 100
