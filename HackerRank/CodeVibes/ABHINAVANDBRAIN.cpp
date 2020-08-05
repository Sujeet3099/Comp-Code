#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;

	while(test--){

		ll n;
		cin>>n;
		vector<ll> v(n);
		ll sum = 0;
		ll isOdd = 0;
		rep(i,0,n){
			cin>>v[i];
		 	if(v[i]%2 != 0 ){
		 		isOdd++;
		 	}
		 	else
		 		continue;
		}
		if(n % 2 == 0){
			cout<<( (isOdd != n && isOdd > 0) ? "YES" : "NO")<<endl;
		}
		else
			cout<<( (isOdd) ? "YES" : "NO")<<endl;

	}
	
	return 0;
}
/**
 * test Case:
 */
// 3
// 4
// 2 2 8 8 
// 6
// 22 33 44 76 90 14
// 5
// 10 12 13 14 16