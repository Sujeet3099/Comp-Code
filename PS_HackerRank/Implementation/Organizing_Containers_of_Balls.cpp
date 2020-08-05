#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Organizing Containers of Balls
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
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m,0));

string solve(){
	ll n;
	cin>>n;
	vi2(n,n);
	rep(i,0,n){
		rep(j,0,n)
			cin>>v[i][j];
	}
	vector<ll> container,balls;
	int temp1 = 0,temp2 = 0;
	rep(i,0,n){
		rep(j,0,n){
			temp1 += v[j][i];
			temp2 += v[i][j];
			
		}
		container.pb(temp2);
		balls.pb(temp1);
		temp2 = 0;
		temp1 = 0;
	}
	sort(all(container));
	sort(all(balls));
	string res;
	res = (container == balls ? "Possible" : "Impossible");
	return res;
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
// 2
// 3
// 1 3 1
// 2 1 2
// 3 3 3
// 3
// 0 2 1
// 1 1 1
// 2 0 0