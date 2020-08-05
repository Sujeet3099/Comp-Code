#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Repeated String
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
	ll n;
	string s;
	cin>>s>>n;
	ll k = s.size();
	ll counter = 0;
	ll adder = 0;
	rep(i,0,s.size()){
		if(s[i] == 'a'){
			counter++;
			if(i<n%k)
				adder = counter;
		}
	}
	ll res = 0;
	// cout<<n<<" "<<k<<" "<<counter<<endl;
	// if(n>s.size())
	res = (n / k )*counter;
	if(n <= s.size())
		res = adder;
	if(n>s.size())
		res+=adder;
	return res;
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
// a
// 1000000000000