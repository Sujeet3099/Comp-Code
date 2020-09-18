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
		int sum = 0,temp = n;
		while(temp){
			// cout<<temp<<' '<<temp%10<<endl;
			sum += temp%10;
			temp/=10;
		}
		if(n%sum==0)	cout<<"YES, "<<n<<" is a Harshad Number with a sum of :"<<sum<<endl;
		else	cout<<"NO, "<<n<<" is not a Harshad Number with a sum of :"<<sum<<endl;
	}
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
