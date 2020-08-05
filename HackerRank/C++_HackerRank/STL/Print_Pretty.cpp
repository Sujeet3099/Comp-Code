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
	ll test;
	cin>>test;
	while(test--){
		double a,b,c;
		cin>>a>>b>>c;
		cout<<hex<<left<<nouppercase<<showbase<<(ll)a<<endl;
		cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<setprecision(2)<<fixed<<b<<endl;
		cout<<scientific<<uppercase<<noshowpos<<setprecision(9)<<c<<endl;

	}
	
	return 0;
}