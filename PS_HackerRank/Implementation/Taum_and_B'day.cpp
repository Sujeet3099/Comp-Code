#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Taum and Birthday
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

ll solve(){
	ll b,w,bc,wc,z;
	cin>>b>>w>>bc>>wc>>z;
	ll cost = 0;
	if(bc+z<=wc)
		cost = (b+w)*bc+(w*z);
	else if(wc+z<=bc)
		cost = (b+w)*wc+(b*z);
	else
		cost = (b*bc)+(w*wc);
	return cost;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// 10 10
// 1 1 1
// 5 9
// 2 3 4
// 3 6
// 9 1 1
// 7 7
// 4 2 1
// 3 3
// 1 9 2