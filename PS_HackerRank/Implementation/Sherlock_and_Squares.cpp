#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Sherlock and Squares
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n;i>=a;i--)

int solve(){
	int a,b,temp = 0;
	cin>>a>>b;
	int lima = floor(sqrt(a)) == ceil(sqrt(a)) ? sqrt(a) : 0;
	int limb = floor(sqrt(b)) == ceil(sqrt(b)) ? sqrt(b) : 0;
	while(floor(sqrt(a)) != ceil(sqrt(a)) && a < b){
		a++;
		if(a >= b){
			temp = a;
			break;
		}
		else if(floor(sqrt(a)) == ceil(sqrt(a))){
			lima = sqrt(a);
			temp = a;
			break;
		}
		else{
			temp = a;
		}
	}
	while(floor(sqrt(b)) != ceil(sqrt(b)) && b > a){
		if(b==temp)
			break;
		b--;
		if(floor(sqrt(b)) == ceil(sqrt(b))){
			limb = sqrt(b);
			break;
		}
	}
	int res = 0;
	res = limb - lima != 0 ? limb - lima + 1 : 0; 
	if( (lima == 0 || limb == 0) && lima != limb)
		res = 1;
	if(lima == limb && lima != 0 )
		res = 1;
	// cout<<lima<<" "<<limb<<" "<<temp<<endl;
	return res;
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
// 2
// 3 9
// 17 24