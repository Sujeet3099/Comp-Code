#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    ll n,q;
    cin>>n>>q;
    vector<ll> height(n+1);
    vector<ll> taste(n+1);
    vector<ll> tasteSum(n+1);
    for (ll i = 1; i <= n; ++i)
    {
    	cin>>height[i];
    }
    for (ll i = 1; i <= n; ++i)
    {
    	cin>>taste[i];
    }
    for(ll i = 1;i <= n; ++i){
    	tasteSum[i] = taste[i]+tasteSum[i-1];
    }
    ll tastiness = 0;
    ll query;
    while(q--){
    	cin>>query;
    	ll b,c,k;
    	if(query == 1){
    		cin>>b>>k;
    		taste[b] = k;
    	}
    	else if( query == 2){
    		cin>>b>>c;
            ll den = c;
            ll startDen = c;
            if(height[b] < height[c]){
                cout<<"-1"<<endl;
            }
            else if( b == c)
                cout<<taste[b]<<endl;
            else if(height[b] == height[c])
                cout<<"-1"<<endl; 
    		else if(b > c){
                tastiness += taste[den];
                for(ll i = c+1; i <= b; ++i){
                    if(height[den] < height[i]){
                        tastiness += taste[i];
                        den = i;
                    }
                }
                if(height[den] > height[b]){
                    cout<<"-1"<<endl;
                    tastiness = 0;
                }

                else if(height[den] == height[b])
                    cout<<tastiness<<endl;
                
            }
            else if(b < c){
                den = c;
                startDen = c;
                tastiness = 0;
                tastiness += taste[den];
                for(ll i = c-1; i >= b; --i){
                    if(height[den] < height[i]){
                        tastiness += taste[i];
                        den = i;
                    }
                }
                if(height[den] > height[b]){
                    cout<<"-1"<<endl;
                    tastiness = 0;
                }

                else if(height[den] == height[b])
                    cout<<tastiness<<endl;
            }
            tastiness = 0;
    	}
    }



	return 0;
}