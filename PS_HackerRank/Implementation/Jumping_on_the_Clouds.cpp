#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Jumping on the Clouds
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
	
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,0,n)
		cin>>v[i];
	int jumps = 0,hop = 0;
	for(int i = 1; i < n; i++){
		hop++;
		if(i == n-1 && hop != 2)
			jumps++;
		else if(hop == 2 && v[i] == 1){
			i--;
			jumps++;
			hop = 0;
		}
		else if(hop == 2 && v[i] == 0){
			jumps++;
			hop = 0;
		}
	}
	return jumps;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 6
// 0 0 0 0 1 0
// 7
// 0 0 1 0 0 1 0