#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	std::vector<ll> v;
    	for (ll i = 0; i < n; ++i)
    	{	
    		ll temp;
    		cin>>temp;
    		v.pb(temp);
    	}
    	// for(auto i:v)
    	// 	cout<<v.at(i)<<" ";
    	ll result = 0;
    	for (ll i = 0; i < n; ++i)
    	{	
    		if(i == 0)
    			continue;
    		else
    			result += abs( abs(v[i] - v[i-1]) - 1);

    		// cout<<v[i]<<" ";
    	}
    	cout<<result<<endl;
    }
	return 0;
}