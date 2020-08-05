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
		string s;
		cin>>s;
		int n;
		cin>>n;
		vector<int> weight(n);
		unordered_map<int,char> m;
		rep(i,0,n)
			cin>>weight[i];
		// repA(i,s)
		// 	cout<<i<<" ";
		int slen = s.size()+1;
		// cout<<slen<<endl;
		int res = abs(96-s[0]);
		char cChar = s[0];
		m[res] = cChar;
		// cout<<res<<endl;
		rep(i,1,slen){
			if( s[i] == cChar){
				m[res] = s[i];
				res += abs(96-s[i]);
				// m[res] = s[i];
			}
			else if(s[i] != cChar){
				m[res] = s[i-1];
				// map(make_pair(s[i-1],res));
				res = abs(96-s[i]);
				cChar = s[i];

			}
		}
		// repA(i,m)
		// 	cout<<i.first<<"\t"<<i.second<<endl;
		auto it = m.begin();
		for(auto i:weight){
			it = m.find(i);
			cout<<( (it != m.end() )  ? "Yes" : "No")<<endl; //&& it->first % i == 0
		}
		

	// }
	
	return 0;
}