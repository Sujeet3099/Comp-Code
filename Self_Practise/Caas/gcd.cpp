#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   GCD
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

void GCD(){
	int a,b;cin>>a>>b;
	int n1 = a,n2 =b;
	if(a>b)	swap(a,b);
	while(b!=0){
		int r = a%b;
		a = b;
		b = r;
	}
	cout<<"GCD of "<<n1<<" & "<<n2<<" is:- "<<a<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int t;cin>>t;
	while(t--)	GCD();
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 6
// 98 56
// 30 60
// 1 19
// 17 19
// 10 16
// 18 54