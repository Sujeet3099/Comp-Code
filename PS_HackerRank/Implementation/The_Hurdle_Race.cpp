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
	
	int n,k;
	cin>>n>>k;
	std::vector<int> v(n);
	rep(i,0,n)
		cin>>v[i];
	sort(v.begin(),v.end());
	int max = v[n-1];
	// cout<<max<<endl;

	int res = max - k;
	
	// cout<<( (res > 0) ? (res) : "0");
	if(res <= 0){
		cout<<"0"<<endl;
	}
	else
		cout<<res<<endl;
	return 0;

}
/**
 * test Case:
 */
// 5 4
// 1 6 3 5 2