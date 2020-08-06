#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Non-Divisible Subset
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
	int n,k;
	cin>>n>>k;
	map<int , int> m;
	int rem,temp = 0,temp2 = 0;
	rep(i,0,n){
		cin>>rem;
		m[rem%k]++;
	}
	repA(i,m){
		if((i.first*2)%k == 0){
			temp2++;
			continue;
		}
		auto it = m.find(k-i.first);
		if(it != m.end()){
			// if(i.second == it->second)
			// 	temp2++;
			if(i.second > it->second){
				temp += i.second;
			}
			else if(i.second < it->second)
				temp += it->second;
		}
		else
			temp2 += i.second;
	}
	repA(i,m)
		cout<<i.first<<" "<<i.second<<endl;
	return temp/2+temp2;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 4 3
// 1 7 2 4