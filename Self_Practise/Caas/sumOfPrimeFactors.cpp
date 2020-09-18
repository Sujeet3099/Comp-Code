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
    
    int t;cin>>t;
    while(t--){
		int n;cin>>n;
		if(n==1){
			cout<<"It doesn't not have any prime factors"<<endl;
			continue;
		}
    	cout<<"The sum of the Prime factors of "<<n<<" :--";
		vector<int> v;
		for(int i = 2; i*i<=n;i++){
			if(n%i==0){
				v.pb(i);
				while(n%i==0)	n/=i;
			}
		}
		if(n!=1)	v.pb(n);
		int sum = 0;
		for(auto i:v)	sum+=i;
		cout<<sum<<endl;
	}
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
