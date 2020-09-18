#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Multiply by 2, divide by 6
 * link          :   https://codeforces.com/problemset/problem/1374/B
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

void solve(){
	ll n;cin>>n;
	ll count = 0,counter = 0;
	while(1){
		if(n==1){
			cout<<counter<<endl;
			return;
		}
		if(count>=2){
			cout<<"-1"<<endl;
			return;
		}
		if(n%6==0){
			n/=6;
			counter++;
			count = 0;
		}
		else{
			n*=2;
			counter++;
			count++;
		}

	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 7
// 1
// 2
// 3
// 12
// 12345
// 15116544
// 387420489
