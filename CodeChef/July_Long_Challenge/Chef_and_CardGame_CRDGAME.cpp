#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	ll morty = 0, chef = 0;
    	ll tempo1,tempo2;
    	for(ll i = 0; i < n; ++i)
    	{
    		ll temp1 = 0,temp2 = 0;
    		cin>>tempo1>>tempo2;
    		while (tempo1 != 0) 
		    { 
		     	temp1 = temp1 + tempo1 % 10; 
		     	tempo1 = tempo1/10; 
		    }
		    while (tempo2 != 0) 
		    { 
		     	temp2 = temp2 + tempo2 % 10; 
		     	tempo2 = tempo2/10; 
		    }  
    		if( temp1 > temp2)
    			chef++;
    		else if(temp2 > temp1)
    			morty++;
    		else if(temp1 == temp2){
    			morty++;
    			chef++;
    		}
    	}
    	if(chef > morty)
    		cout<<"0 "<<chef<<endl;
    	else if(chef < morty)
    		cout<<"1 "<<morty<<endl;
    	else if( chef == morty)
    		cout<<"2 "<<chef<<endl;

    }

	return 0;
}