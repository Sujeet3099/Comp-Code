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


int solve(int s,int d,int h,int n){
	static int count = 0;
	count++;
	if(n == 1){
		cout<<"Moving disc "<<n<<" from "<<s<<" to "<<d<<endl;
		return 0;
	}
	solve(s,h,d,n-1);
	cout<<"Moving disc "<<n<<" from "<<s<<" to "<<d<<endl;
	solve(h,d,s,n-1);
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--){
		int n;cin>>n;
		int s = 1,h = 2,d = 3;
		cout<<solve(s,d,h,n)<<endl;
		// cout<<count<<endl;
	}
	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
