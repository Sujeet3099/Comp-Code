#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */


#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

double taylor(int x,int n){
	static double f = 1, p = 1;
	double  res=0;
	if(n == 0)
		return 1;
	else {
		res = taylor(x,n-1);
		p*=x;
		f*=n;
	}
	return res+p/f;
}
/**
 * teylor series using horner's rule
 */
double e(int x,int n){
	static double s;
	if(n == 0)
		return s;
	else{
		s=1+(x*s/n);
		return e(x,n-1);
	}
	return s;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n,m;cin>>m>>n;
	// cout<<setprecision(10)<<taylor(m,n);
	cout<<setprecision(10)<<e(m,n);
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
