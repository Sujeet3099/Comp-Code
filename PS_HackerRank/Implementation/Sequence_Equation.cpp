#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	int n;
	cin>>n;
	vector<int> v(n+1);
	rep(i,1,n+1){
		cin>>v[i];
	}

	rep(i,1,n+1){
		int it = find(all(v),i) - v.begin();
		int itr = find(all(v),it) - v.begin();
		cout<<itr<<endl;
	}

	return 0;
}

/**
 * more optimised
 * int n;
    cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        p[k]=i;
    }
    for(int i=1;i<=n;i++)cout<<p[p[i]]<<endl;
 */

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
	
	solve();

	}
	
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 2 3 1