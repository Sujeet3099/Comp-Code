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

int solve(){
	int city,xn,yn;
	cin>>city;
	string t;
	unordered_map<string> c;
	rep(i,0,city){
		cin>>t;
		c.insert(make_pair(t,i));
	}
	cin>>xn;
	unordered_map<int> x;
	int txy;
	rep(i,0,xn){
		cin>>txy;
		x.insert(make_pair(txy,i));
	}	
	cin>>yn;
	unordered_map<int> y;
	rep(i,0,yn){
		cin>>txy;
		y.insert(make_pair(txy,i));
	}
	ll m;
	string s;
	ll tempx,tempy;
	cin>>m;
	while(m--){
		cin>>s;
		// auto itr = find(c.begin(),c.end(),s);
		auto itr = c.find(s);
		tempx = x[itr->second];
		tempy = y[itr->second];
		auto temp1,temp2;
		// temp1 = find(x.begin(),x.end(),tempx)-x.begin();
		// temp2 = find(y.begin(),y.end(),tempy)-y.begin();
		temp1 = x.find(tempx);
		temp2 = y.find(tempy);
		if(temp1!=xn){
			cout<<c[temp1]<<endl;
		}
		else if(temp2!=yn){
				cout<<c[temp2]<<endl;
		}
		else
			cout<<"NONE"<<endl;
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
// 3
// fastcity
// bigbanana
// xyz
// 3
// 23
// 23
// 23
// 3
// 1
// 10
// 20
// 3
// fastcity
// bigbanana
// xyz