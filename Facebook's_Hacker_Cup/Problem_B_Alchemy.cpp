#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
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

char solve(){
	ll n;
	char res = 'Y';
	cin>>n;
	string s;
	cin>>s;
	std::map<char, int> m;
	rep(i,0,n){
		m[s[i]]++;
	}
	int r = abs(m['A']-m['B']);
	res = (r == 1 ? 'Y' : 'N');
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	ll z = test;
	while(test--){
		cout<<"Case #"<<(z-test)<<":"<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
