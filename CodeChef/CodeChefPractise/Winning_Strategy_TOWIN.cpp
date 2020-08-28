#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Winning Strategy Problem Code: TOWIN
 * link          :   https://www.codechef.com/problems/TOWIN
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
	ll n,first = 0,second = 0;cin>>n;
	vll(n);
	rep(i,0,n){
		cin>>v[i];
		// if(i==0)	first+=v[i];
		// else if(i == 1 || i == 2)	second+=v[i];
		// else{
		// 	if(i%2==0)	second+=v[i];
		// 	else	first+=v[i];
		// }
	}
	sort(all(v),greater<int>());
	rep(i,0,n){
		if(i==0)	first+=v[i];
		else if(i == 1 || i == 2)	second+=v[i];
		else{
			if(i%2==0)	second+=v[i];
			else	first+=v[i];
		}
	}
	string res = (first>=second?"first":"second");
	if(first==second)	res = "draw";
	// cout<<first<<' '<<second<<endl;
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 3
// 1 1 1
// 4
// 1 1 1 1