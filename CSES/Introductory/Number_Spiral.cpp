#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Number Spiral
 * link          :   https://cses.fi/problemset/task/1071
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define repA(i,v) for(auto i:v)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

void solve(){
	ll x,y;cin>>x>>y;
	if(x > y){
		if(x&1)	cout<<(x-1)*(x-1)+(y)<<endl;
		else	cout<<x*x-(y-1)<<endl;
	}
	else{
		if(y&1)	cout<<y*y-(x-1)<<endl;
		else	cout<<(y-1)*(y-1)+(x)<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 2 3
// 1 1
// 4 2