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
	ll test,n;
	cin>>n>>test;
	// vector<ll> v(n);
	map<ll, vector<ll> > m;
	ll lastInt = 0;
	while(test--){
		ll q,x,y;
		cin>>q>>x>>y;
		ll index = 0;
		if(q == 1){
			index = (x ^ lastInt) % n;
			// vector<ll> &v = m[index];
			// v.pb(y);
			m[index].pb(y);
		}
		else if(q == 2){
			index = (x ^ lastInt) % n;
			
			// lastInt = v.size();
			int ele = y % m[index].size();
			vector<ll> &v = m[index];
			lastInt = v[ele];
			cout<<lastInt<<endl;
		}

		
	}
	// repA(i,m){
	// 		cout<<i.first<<"\t";
	// 		repA(j,i.second)
	// 			cout<<j<<" ";

	// 		cout<<endl;
	// 	}
	// for(auto i = m.begin();i!=m.end();i++){
	// 	cout<<i->first<<"\t";
	// 	for(auto it = i->second.begin();it!=i->second.end();it++){
	// 			cout<<*it<<" ";
	// 		}
	// 	cout<<endl;
	// }
	return 0;
}