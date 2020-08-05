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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int valleys = 0;
		int refSealevel = 0;
		bool isValley  = false;
		rep(i,0,s.size()){
			if(s[i] == 'D' )
				refSealevel--;
			else if(s[i] == 'U' )
				refSealevel++;
			if(refSealevel < 0 && isValley == false){
				isValley = true;
				valleys++;
			}
			else if(refSealevel >= 0 && isValley == true){
				isValley = false;
			}
		}
		cout<<valleys<<endl;
	// }
	return 0;
}