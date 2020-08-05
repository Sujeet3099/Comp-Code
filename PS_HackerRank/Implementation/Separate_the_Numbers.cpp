#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Separate the Numbers
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
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

int solve(){
	string s;
	cin>>s;
	string temp1 = "",temp2 = "";
	int n = s.size();
	int k = 1,first = 0,second = 0;
	for(int i = 0; i < n; i++){
		temp1 += s[i];
		temp2 = s[i+1];
		first = stoi(temp1);
		second = stoi(temp2);
		if(abs(first-second) == 1){
			break;
		}
	}
	k = temp1.size();
	cout<<temp1<<endl;
	return 0;
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
// 7
// 1234
// 91011
// 99100
// 101103
// 010203
// 13
// 1