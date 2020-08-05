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
		int n,k;
		cin>>n>>k;
		vector<int> bill(n);
		int billActual = 0;
		rep(i,0,n){
			cin>>bill[i];
			if(i == k)
				continue;
			else
				billActual += bill[i];
		}

		int billCharge;
		cin>>billCharge;
		billActual = billActual / 2;
		// billActual -= bill[k];
		// cout<<billActual<<endl;
		if(billActual == billCharge)
			cout<<"Bon Appetit";
		else
			cout<<billCharge - billActual;


	// }
	
	return 0;
}