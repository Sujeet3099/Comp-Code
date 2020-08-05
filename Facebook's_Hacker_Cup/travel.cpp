#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(){
	ll n;
	ll flightin =1;
	ll flightout = 0;
	string s1,s2;
	cin>>n>>s1>>s2;
	std::vector<vector<char> > v(n,vector<char>(n,'0'));
	bool flow;
	rep(i,0,n){
		rep(j,0,n){
			flightout++;
			flightin--;
			if(i == j)
				v[i][j] = 'Y';
				// cout<<'Y';
			else if(abs(i-j)<=1){
				if(s2[i] == 'Y' && s1[j] == 'Y')
					v[i][j] = 'Y';
					// cout<<'Y';
				else
					v[i][j] = 'N';
					// cout<<'N';
			}
			
			else{
				flow = true;
				if(i<j){
					for(ll k = i; k<j;k++){
						if(s2[k] != 'Y' || s1[k+1] != 'Y'){
							flow = false;
							break;
						}
					}
					flightout++;
					flightin++;
					if(flow){
						v[i][j] = 'Y';
						// cout<<'Y';
					}
					else
						v[i][j] = 'N';
						// cout<<'N';
				}
				else{
					for(ll k = i;k>j;k--){
						if(s2[k] != 'Y' || s1[k-1] != 'Y'){
							flow = false;
							break;
						}
					}
					flightout++;
					flightin++;
					if(flow)
						v[i][j] = 'Y';
						// cout<<'Y';
					else
						v[i][j] = 'N';
						// cout<<'N';
				}
			}
		}
		// cout<<endl;
	}
	flightout++;
	flightin++;
	rep(i,0,n){
		rep(j,0,n){
			cout<<v[i][j];
		}
		cout<<endl;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	int z = test;
	while(test--){
		cout<<"Case #"<<(z-test)<<":"<<endl;
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
