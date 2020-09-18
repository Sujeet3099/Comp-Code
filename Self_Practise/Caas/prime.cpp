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
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n = 1e6; //change it according to the range just pre-computed it so wont increase the runtime for each query
	vector<int> v(n+1,1);
	v[0] = v[1] = 0;
	for(int i = 2;i*i<(n+1);i++){
		if(v[i] == 0)	continue;
		for(int j = 2; i*j<n+1;j++)	v[i*j] = 0;
	}
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int p = 0;
		rep(i,2,1e4){
			if(v[i]==1)	p++;
			if(p == n){
				cout<<n<<"th Prime Number is :- "<<i<<endl;
				break;
			}
		}
	}
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 6
// 5
// 19
// 7
// 11
// 12
// 13