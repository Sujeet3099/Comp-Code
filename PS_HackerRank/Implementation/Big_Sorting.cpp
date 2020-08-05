#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

bool compare(const string&a, const string&b)
{
	if(a.length()==b.length())
        return a<b;
    else
        return a.length()<b.length();
    // return a < b;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector <string> v;
		string temp;
		rep(i,0,n){
			cin>>temp;
			v.pb(temp);
		}
		sort(v.begin(),v.end(),compare);
		
		repA(i,v)
			cout<<i<<endl;
	}
	
	return 0;
}