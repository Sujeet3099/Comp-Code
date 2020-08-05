#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	// vector <ll> v;
	int n;
	cin>>n;
	cin.ignore();
	ll sum = 0;
	for (int i = 0; i < n; ++i)
	{
		ll temp;
		cin>>temp;
		// v.pb(temp);
		sum += temp;
	}
	cout<<sum;
    // cout<<"Sum:";
	return 0;
}