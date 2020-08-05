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

    for(ll test = 1; test <= t; test++){
    	ll n,temp,recordBreakingDays=0;
    	vector<ll> v;
    	cin>>n;
    	for (ll i = 0; i < n; ++i)
    	{
    		cin>>temp;
    		v.pb(temp);
    	}
    	ll next = 0;
    	ll nextMax = -1;
    	for(ll i = 0; i < n; ++i){
    		if(i == 0 && v[0] > v[1]){
    			nextMax = v[0];
    			recordBreakingDays++;
    		}	
    		else if ( i == 0 && v[0] < v[1]){
    			nextMax = v[1];
    			if(v[1]>v[2])
    				recordBreakingDays++;
    		}
    		else if( i == 0 && v[0] == v[1])
    			nextMax = v[1];
    		else if(i == n-1 && v[n-1] == *max_element(v.begin(), v.end()) && v[n-1]>v[n-2] )
    			recordBreakingDays++;
    		else if(v[i] > nextMax){
    			nextMax = v[i];
    			if(v[i] > v[i+1])
    				recordBreakingDays++;
    		}
        }
        cout<<"Case #"<<test<<": "<<recordBreakingDays<<endl;


    }
	return 0;
}

/**
 * if(i == 0 && v[0] > v[1]){
    			recordBreakingDays++;
    		}
    		else if(i == 0 && v[0] < v[1]){
    			
    			next = 1;
    			if(v[1]>v[2])
    				recordBreakingDays++;

    		}
    		else if(i == n-1 && v[n-1] == *max_element(v.begin(), v.end()) && v[n-1]>v[n-2] ){
    			recordBreakingDays++;
    			// cout<<v[n-1]<<" == "<<*max_element(v.begin(), v.end())<<"----"<<recordBreakingDays<<endl;
    		}
            else if(v[next] < v[i+1] && i != n-1){
            	// cout<<next<<"----"<<i<<"----"<<endl;
            	next = i+1;
                if(v[i+1] > v[i+2] && i != n-2){
                	
                	recordBreakingDays++;
                	// cout<<recordBreakingDays<<endl;
                }
            }
 */