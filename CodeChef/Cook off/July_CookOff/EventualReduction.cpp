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
		bool res = true;
		map<char,int> m;
		int n;
		string s;
		cin>>n;
		cin>>s;

		repA(i,s){
			m[i]++;
		}
		// repA(i,m)
		// 	cout<<i.first<<"\t"<<i.second<<endl;
		repA(i,m){
			if(i.second % 2 != 0){
				res = false;
				break;
			}	
		}
		cout<<(res ? "YES" : "NO")<<endl;
	}
	
	return 0;
}

/**
 * Test Case:
 */
// 4
// 6
// cabbac
// 7
// acabbad
// 18
// fbedfcbdaebaaceeba
// 21
// yourcrushlovesyouback
