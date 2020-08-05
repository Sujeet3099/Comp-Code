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
	int budget,n,m;
	cin>>budget>>n>>m;
	std::vector<int> keyboard(n);
	std::vector<int> usb(m);
	std::vector<int> v;
	rep(i,0,n){
		cin>>keyboard[i];
	}
	rep(i,0,m){
		cin>>usb[i];
	}
	if(*min_element(keyboard.begin(),keyboard.end()) + *min_element(all(usb)) >= budget){
		cout<<"-1"<<endl;
		return -1;
	}
	rep(i,0,n){
		rep(j,0,m){
			if(keyboard[i] + usb[j] <= budget)
				v.pb(keyboard[i] + usb[j]);
		}
	}
	cout<<*max_element(all(v))<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// ll test;
	// cin>>test;
	// while(test--){
		solve();

	// }
	
	return 0;
}