#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */


#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<=n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	int n;
	cin>>n;
	int like = 0, shared = 5;
	rep(i,1,n){
		like += floor(shared/2.0);
		shared = floor(shared/2.0)*3;
	}
	cout<<like;
	return 0;
}

/**
 * Test Cases:-
 */
// 3