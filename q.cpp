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
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
void solve(vector<int>&v,int n){
	// srand(time());
	rep(i,0,n)
		v[i]=rand()%n;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

	ll test = 1;
	// cin>>test;
	while(test--){
		int n;cin>>n;
		vi v(n);
		solve(v,n);
    	clock_t start=clock();
		sort(all(v));
		clock_t end=clock();
		cout<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    	
    	start=clock();
		sort(all(v));
		end=clock();
		cout<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	}

	return 0;
}
/**
 * Test Cases:-
 */
