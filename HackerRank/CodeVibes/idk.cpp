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
	
	string s;
	getline(cin,s);
	
	s.erase( remove(s.begin(),s.end(),' ' ),s.end() );
	int len = s.size();
	int rows = floor(sqrt(len));
	int cols = ceil(sqrt(len));
	
	// cout<<s<<endl;
	int count = 0;
	rep(i,0,len){
		if(count == cols){
			cout<<endl;
			count = 0;
			i--;
		}
		else{
			cout<<s[i];
			count++;
		}
	}
	return 0;
}