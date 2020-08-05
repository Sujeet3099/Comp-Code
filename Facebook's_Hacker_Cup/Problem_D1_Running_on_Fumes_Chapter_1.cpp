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
	ll n,m,temp,gap,cost = 0;
	ll nextGas,counter = 0;
	cin>>n>>m;
	vector<int> v(n);
	temp = m;
	rep(i,0,n){
		cin>>v[i];
	}
	if(m>=n-1){
		cost = 0;
	}
	else if(m == 0)
		cost = -1;
	else{
		rep(i,1,n){
			while(temp--){
				counter = i;
				gap = 0;
				if(counter == n){
					return 0;
					break;
				}
				else if(v[counter] == 0){
					gap++;
					counter++;
				}
				else if(v[counter] != 0){
					nextGas = counter;
					gap = 0;
					counter++;
				}
				if(gap>m)
					return -1;
			}
			i += counter;
			cost+=v[i];
			temp = m;
		}
	}
	return cost;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	ll z = test;
	while(test--){
		cout<<"Case #"<<(z-test)<<":"<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
