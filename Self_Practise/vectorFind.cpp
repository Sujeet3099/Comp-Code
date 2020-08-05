#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	std::vector<int> v;
	v.pb(5);
	v.pb(19);
	v.pb(10);
	v.pb(11);
	v.pb(14);
	v.pb(22);
	auto itr = v.end();
	cout<<*(itr-1)<<endl; // output:- 22
	cout<<*(itr)<<endl;  // output:- 0
	if(find(v.begin(),v.end(),22) != v.end() ) //yes
		cout<<"yes";
	else
		cout<<"No";

	return 0;
}