#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	unordered_multiset<ll> x;
    unordered_multiset<ll> y;
    int t;
    cin>>t;

    while(t--){

    	ll n;
    	cin>>n;
    	ll temp1,temp2;
    	for (int i = 0; i < (4*n)-1; ++i)
    	{
    		cin>>temp1>>temp2;
    		if(x.count(temp1))
    			x.erase(temp1);
    		else
    			x.insert(temp1);
    		if(y.count(temp2))
    			y.erase(temp2);
    		else
    			y.insert(temp2);
    	}
    	ll resX,resY;
    	auto itr1 = x.begin();
    	resX = *itr1;
    	auto itr2 = y.begin();
    	resY = *itr2;
    	cout<<resX<<" "<<resY<<"\n";
    	x.erase(resX);
    	y.erase(resY);x`
    }

    return 0;
}