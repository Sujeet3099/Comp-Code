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
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int a,b;
	int res = 0;
	a = x;
	b = y%x;
	// b = y%x==0?x:y%x;
	if(y%x==0){
		if(y/x == 1)
			b = 0;
		else if((y/x)>= 2)
			b = x;
	}
	int mult = n*m;
	int one,two;
	if(m%2 != 0){
		one = ceil(mult/2.0);
		two = floor(mult/2.0);
		}
	else if(m%2 == 0){
		one = ceil(mult/2.0);
		two = floor(mult/2.0);
	}

	if(x == y){
		// a = ceil(x/2.0);
		// b = floor(y/2.0);
		a = x;
		b = 0;
		res = (a*one)+(b*two);
	}
	else if(x > y){
		a = y;
		b = 0;
		// if(x%y==0){
		// 	if(x/y == 1)
		// 		b = 0;
		// 	else if((x/y)>= 2)
		// 		b = y;
		// }
		res = (a*one)+(b*two);
	}
	else{
			res = (a*one)+(b*two);
	}
	cout<<res<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
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
// 4 4 4 6
// 3 4 4 5

// else if(m%2 != 0){
// 			res = (a*mult)+(b*multm);
// 		}
// 		else if(n%2 != 0){
// 			res = (a*multn)+(b*mult);
// 		}
// 		else if(m%2 != 0 && n%2 != 0){
// 			res = (a*multn)+(b*multm);
// 		}