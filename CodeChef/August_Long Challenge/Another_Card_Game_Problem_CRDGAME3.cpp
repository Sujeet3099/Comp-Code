#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Another Card Game Problem Problem Code: CRDGAME3
 * link          :   https://www.codechef.com/AUG20B/problems/CRDGAME3
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
	int pr,pc,chef,rick,remc,remp,remres,result;
	cin>>pc>>pr;
	if(pc<=9 && pr<=9){
		result = 1;
		remres = 1;
	}
	else{
		remc = ceil(pc/9.0);
		remp = ceil(pr/9.0);
		// cout<<pc<<"<>"<<pr<<endl;
		// cout<<remc<<" == "<<remp<<endl;
		if(remc>remp){
			result = 1;
			remres = remp;
		}
		else{
			result = 0;
			remres = remc;
		}
	}
	cout<<result<<" "<<remres<<endl;
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
// 3
// 3 5
// 28 18
// 14 24