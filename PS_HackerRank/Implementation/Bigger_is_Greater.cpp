#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Bigger is Greater
 * link          :   https://www.hackerrank.com/challenges/bigger-is-greater/problem
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

string solve(){
	string s,str;
	char temp;
	cin>>s;
	str = s;
	ll n = s.size();
	per(i,1,n){
		if(s[i] > s[i-1]){
			temp = s[i];
			s[i] = s[i-1];
			s[i-1] = temp;
			break;
		}	
	}
	if(str == s)
		s = "no answer";
	return s;
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
// 5
// ab
// bb
// hefg
// dhck
// dkhc