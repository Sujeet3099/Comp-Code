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
	int a,b,c;
	while(test--){
		cin>>a>>b>>c;
		int catA = abs(c-a);
		int catB = abs(c-b);
		if(catA < catB)
			cout<<"Cat A"<<endl;
		else if(catA > catB)
			cout<<"Cat B"<<endl;
		else if( catA == catB)
			cout<<"Mouse C"<<endl;
	}
	
	return 0;
}