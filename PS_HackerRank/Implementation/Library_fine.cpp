#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Library fine
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
	int d1,d2,m1,m2,y1,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	int fine = 0;

	if(y1>y2)
		fine = 10000;
	else if(m1>m2 && y1>=y2){
		fine = (m1-m2)*500;
	}
	else if(d1>d2 && y1>=y2 && m1>=m2)
		fine = (d1-d2)*15;
	return fine;
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
// 3
// 2 7 1014
// 1 1 1015
// 28 2 2015 
// 15 4 2015
// 9 6 2015
// 6 6 2015