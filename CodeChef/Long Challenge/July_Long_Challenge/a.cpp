#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	std::vector<int> v;	
	cout<<v.size()<<endl;
	v.pb(6);
	v.pb(5);
	v.pb(2);
	int a = *min_element(v.begin(),v.end());
	int b = 8;
	cout<<min(b,a)<<" "<<endl;
	// cout<<a;
	return 0;
}