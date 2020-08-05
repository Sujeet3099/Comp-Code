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
	
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,0,n)
		cin>>v[i];
	sort(v.begin(),v.end());
	repA(i,v)
		cout<<i<<" ";
	
	return 0;
}