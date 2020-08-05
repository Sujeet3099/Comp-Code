#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */


#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	vector<int> v(26);
	string s;
	rep(i,0,26)
		cin>>v[i];
	cin>>s;
	int mx = 0;
	int len = s.size();
	int temp;
	repA(i,s){
		temp = i - 97;
		mx = max(mx,v[temp]);
	}
	int res = mx * len;
	cout<<res<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
// abc
