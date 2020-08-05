#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Equalize the Array
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

int solve(){
	int n,temp;
	cin>>n;
	vector<int> v(n);
	map<int,int> m;
	rep(i,0,n){
		cin>>temp;
		m[temp]++;
	}
	int mx = 0;
	for(auto it = m.begin(); it!=m.end();it++){
		mx = max(it->second,mx);
	}
	return n-mx;
}

int main(){
	clock_t start=clock();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	clock_t end=clock();
	cout<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// 3 3 2 1 3