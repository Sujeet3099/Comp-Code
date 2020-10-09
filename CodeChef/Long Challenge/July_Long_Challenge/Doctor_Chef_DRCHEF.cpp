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
	
		
		
		std::vector<ll> v;
		ll temp,n,cures,daysTaken = 0;
		cin>>n;
		cin>>cures;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			v.pb(temp);
		}
		sort(v.begin(),v.end());
		if( *max_element( v.begin(), v.end() ) <= cures){
			daysTaken = n;
		}
		else{
			for (ll i = 0; i < n; ++i)
			{
				if( v.at(i) > cures)
				{
					while( ceil(v.at(i) / 2.0) > cures){
						cures *= 2;
						daysTaken++;
					}
					daysTaken += 2 ;
					cures = v.at(i)*2;
					v.at(i) = 0;
				}
				else if( (v.at(i) ) == cures ){
						daysTaken++;
						cures = v.at(i)*2;
						v.at(i) = 0;
				}
				else if( abs(v.at(i)-cures) < ceil(cures/2.0) )
				{
					cures=v.at(i)*2;
					daysTaken++;
					v.at(i)=0;
				}
	
			}
			for (int i = 0; i < n; ++i)
			{
				if(v[i] != 0)
					daysTaken++;
			}
		}
		cout<<daysTaken<<endl;
	}	

	return 0;
}