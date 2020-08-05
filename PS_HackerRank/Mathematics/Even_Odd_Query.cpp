#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Even Odd Query
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

string solve(vector<int> &v){
	int x,y;
	cin>>x>>y;
	string res;
	if(x > y)
		res = "Odd";
	else if(x == y){
		res = (v[x] % 2 == 0 ? "Even" : "Odd");
	}
	else if(v[x+1] == 0)
		res = "Odd";
	else
		res = (v[x] % 2 == 0 ? "Even" : "Odd");
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	int n;
	cin>>n;
	vector<int> v(n+1);
	rep(i,1,n+1)
		cin>>v[i];
	cin>>test;
	while(test--){
		cout<<solve(v)<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
