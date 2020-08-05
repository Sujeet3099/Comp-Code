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

void rotate(deque<int>&d,int k){
	int temp;
	while(k--){
		temp = d.front();
		d.push_back(temp);
		d.pop_front();
	}
}

void solve(){
	int n,k;
	cin>>n>>k;	
	deque<int> d(n);
	rep(i,0,n){
		cin>>d[i];
	}
	rotate(d,k);
	repA(i,d)
		cout<<i<<" ";
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 2
// 5 2
// 1 2 3 4 5 
// 10 3
// 2 4 6 8 10 12 14 16 18 20