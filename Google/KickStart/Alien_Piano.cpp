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

    	ll k,temp,count=0,ruleBreak=0;
    	cin>>k;
    	vector<ll> v;
    	for (int i = 0; i < k; ++i)
    	{
    		cin>>temp;
    		v.pb(temp);
    	}
    	for (int i = 0; i < k; ++i)
    	{
    		
    		if( i == 0 && v[0] < v[1]){
    			count++;
    		}
    		else if ( v[i] < v[i+1]){
    			count++;
    			if(count>=4){
    				ruleBreak++;
    				count = 0;
    			}
    		}
    		else if ( v[i] > v[i+1] ){
    			count--;
    			if(count>=4){
    				ruleBreak++;
    				count = 0;
    			}

    		}

    	}
    	cout<<"Case #"<<test<<": "<<ruleBreak<<endl;
    }

	return 0;
}

// if(i == k-1 && v[k-1] > v[k-2]){
    		// 	count++;
    		// 	if(count>=4){
    		// 		ruleBreak++;
    		// 		count = 0;
    		// 	}
    		// 	cout<<i<<" -- "<<ruleBreak<<"== k-1 wala "<<count<<endl;
    		// 	break;

    		// }

    		// else if( v[i+1] > v[i] ){
    		// 	count++;
    			
    		// 	if(count>=4){
    		// 		ruleBreak++;
    		// 		count = 0;
    		// 	}
    		// 	cout<<i<<" -- "<<ruleBreak<<"== >> wala "<<count<<endl;

    		// }
    		// else if(v[i+1]<v[i]){
    		// 	count--;
    		// 	if(count>=4){
    		// 		ruleBreak++;
    		// 		count = 0;
    		// 	}
    		// 	cout<<i<<" -- "<<ruleBreak<<"== << wala "<<count<<endl;
    		// }