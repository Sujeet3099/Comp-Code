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
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    int arr[n];rep(i,0,n) cin>>arr[i];

    rep(i,0,n-1){
    	int j = i+1,pos = i+1;
    	int newMin = arr[i];
    	while(j<n){
    		cout<<"Comparing "<<arr[j]<<" and "<<newMin<<endl;
    		if(arr[j]<newMin){
    			newMin = arr[j];
    			pos = j;
    		}
    		j++;
    	}
    	if(newMin<arr[i]){
			cout<<"Swapping "<<arr[i]<<" and "<<newMin<<endl;
			swap(arr[pos],arr[i]);

    	}
    	else{
    		cout<<"Swapping "<<arr[i]<<" and "<<arr[i]<<endl;
			swap(arr[i],arr[i]);
    	}
    }

    rep(i,0,n)	cout<<arr[i]<<endl;

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
