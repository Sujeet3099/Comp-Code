#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// ll test;
	// cin>>test;
	// while(test--){

		int n,temp;
		cin>>n;
		map<int , int> socks;
		rep(i,0,n){
			cin>>temp;
			socks[temp]++;
		}
		int count = 0;
		int matchingPairs = 0;
		for(auto it = socks.begin(); it != socks.end(); it++){
			// cout<<it->first<<"\t"<<it->second<<endl;
			// if(it->second % 2 == 0)
				floor(it->second / 2.0) >= 1 ? matchingPairs += floor(it->second / 2.0) : count++;
		}
		cout<<matchingPairs;
	// }
	
	return 0;
}