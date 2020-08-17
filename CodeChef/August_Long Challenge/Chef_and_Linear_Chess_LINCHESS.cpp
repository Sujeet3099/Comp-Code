#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Chef and Linear Chess Problem Code: LINCHESS
 * link          :   https://www.codechef.com/AUG20B/problems/LINCHESS
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
	int n,k,temp,distance;
	cin>>n>>k;
	vi(n+1);
	rep(i,1,n+1){
		cin>>v[i];
	}
	map<int,int> res;
	// auto it =res.begin();
	// cout<<it->first<<endl;
	rep(i,1,n+1){
		temp = k - v[i];
		if(k%v[i] == 0){
			distance = (k/v[i])-1;
			res[distance] = v[i];
		}
		else if(temp % v[i] == 0 && v[i] > k){
			distance = (temp/v[i])-1;
			res[distance] = v[i];
		}
	}
	auto it = res.begin();
	// cout<<(it->first > 0 ? it->first : "-1" )<<endl;
	if(it->first > 0)
		cout<<it->second<<endl;
	else if( it == res.end())
		cout<<"-1"<<endl;

	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--){
		// cout<<solve()<<endl;
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 4 6
// 4 3 2 8
// 4 7
// 4 3 2 8