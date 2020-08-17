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
int func1(int n){
	if(n>0){
		cout<<n<<" ";
		// printf("%d ",n);
		func1(n-1);
	}
	return 0;
}

int func2(int n){
	if(n>0){
		func2(n-1);
		cout<<n<<" ";
		// printf("%d ",n);
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n;
	cin>>n;
	// scanf("%d",&n);
	func1(n);
	cout<<endl;
	// printf("\n");
	func2(n);
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
