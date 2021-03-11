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
    int arr[n];
    rep(i,0,n)	cin>>arr[i];
    rep(i,0,n){
    	rep(j,0,n-i-1){
    		cout<<"Comparing "<<arr[j+1]<<" and "<<arr[j]<<endl;
    		if(arr[j]>arr[j+1]){
    			cout<<"Swapping "<<arr[j+1]<<" and "<<arr[j]<<endl;
    			swap(arr[j],arr[j+1]);
    		}
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
