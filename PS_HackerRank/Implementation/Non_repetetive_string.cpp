#include"bits/stdc++.h"
using namespace std;
/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Some random question
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

int count(string s, char c) 
{ 
    int res = 0; 
    for (int i=0;i<s.length();i++) 
        if (s[i] == c) 
            res++; 
    return res; 
}
int solve(){
	string s;
	cin>>s;
	char temp;
	int len = s.size();
	// transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i=0; i < len; i++){
		temp = s[i];
		int m = count(s,temp);
		if(m == 1){
			cout<<temp<<" ";
			break;
		}
	}
	for(int j = len-1; j>0;j--){
		temp = s[j];
		if(count(s,temp) == 1){
			cout<<temp<<endl;
			break;
		}
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int test = 1;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 4
// strinss
// Geekforgeeks
// hello
// String

