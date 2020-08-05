#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	std::vector<int> v(4) ;
	v.pb(20);
	v.pb(21);
	v.pb(18);
	cout<<v.size()<<endl;
	for(auto i : v)
		cout<<v[i]<<" ";
	cout<<endl<<v.back();
	return 0;
}