#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   ACM ICPC Team
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

void solve(){
	ll n,m;
	cin>>n>>m;
	ll mx = 0,topics = 0;
	vector<int> maxm;
	vector< string > v(n);
	rep(i,0,n){
		cin>>v[i];
	}
	string temp1,temp2;
	rep(i,0,n){
		for(ll j = i+1; j < n; j++){
			temp1 = v[i];
			temp2 = v[j];
			rep(k,0,m){
				if(temp1[k] == '1' || temp2[k] == '1'){
					topics++;
				}
			}
			mx = max(topics,mx);
			maxm.pb(topics);
			topics = 0;
		}
	}
	int maximum = count(all(maxm),mx);
	cout<<mx<<endl<<maximum<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 4 5
// 10101
// 11100
// 11010
// 00101
