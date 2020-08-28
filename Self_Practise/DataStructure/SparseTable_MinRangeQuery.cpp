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

int m[][] preProcess(int input[],int n){
	int sparse[n][log(n)+1];
	rep(i,0,n)	sparse[i][0]=i;
	for(int j = 1; pow(2,j)<=n;j++){
		for(int i = 0;i+pow(2,j)-1<n;i++){
			if(input[i][j-1]<input[sparse[i+pow(2,j-1)][j-1]])
				sparse[i][j]=sparse[i][j-1];
			else
				sparse[i][j]=sparse[i+pow(2,j-1)][j-1];
		}
	}
	return sparse;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int a;
	int arr[6]={3,1,2,6,5,1};
	a = preProcess(arr,6);
	rep(i,0,n){
		rep(j,0,n){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
