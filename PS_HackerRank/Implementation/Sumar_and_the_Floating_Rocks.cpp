#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Sumar and the Floating Rocks
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

ll solve(){
	ll x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	ll g = __gcd((x1-x2),(y1-y2));
	// ll x = (y1-y2)/g;k
	// ll y = (x1-x2)/g;
	// ll res1 = (abs(y2-y1)/y)-1;
	// ll res2 = (abs(x2-x1)/x)-1;
	// cout<<res1<<" "<<res2<<endl;
	ll res = abs(g)-1;
	// ll x,y,res = 0;
	// x = abs(x1-x2);
	// y = abs(y1-y2);
	// res = min(x,y);
	// res--;
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
// 3
// 0 2 4 0
// 2 2 5 5
// 1 9 8 16