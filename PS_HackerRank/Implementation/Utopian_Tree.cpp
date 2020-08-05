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

int solve(){
	
	int n;
	cin>>n;
	int growth = 1;
	int counter = 0;
	rep(i,1,n){
		if(counter == 0){
			growth *= 2;
			counter++;
		}
		else if(counter == 1){
			growth += 1;
			counter--;
		}

	}

	return growth;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
	
	cout<<solve()<<endl;

	}
	
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 0
// 1
// 4