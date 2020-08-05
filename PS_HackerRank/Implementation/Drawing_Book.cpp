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
		int n,p;
		cin>>n>>p;
		// cout<<n<<" "<<p;
		int count = 0;
		int pages = floor(n/2.0) + 1;
		int currentPage = floor(p/2.0) + 1;
		// cout<<pages<<endl;
		if(ceil(pages/2.0) >= currentPage){
			cout<<currentPage-1<<endl;
		}
		else
			cout<<(pages - currentPage)<<endl;
		// cout<<count;	
	// }
	
	return 0;
}