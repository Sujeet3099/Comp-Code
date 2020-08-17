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

void insertionSort(vector<int> &v,int n){
	int j,temp;
	bool replace = false;
	rep(i,2,n){
		j = i;
		while(j--){
			if(v[i]<v[j]){
				replace = true;
				v[i] = v[j];
				v[j] = v[i];
			}
			else  if( v[i]>=v[j] && replace == true){
				temp = v[j];
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,0,n) cin>>v[i];
	// repA(i,v) cout<<i<<' ';
	insertionSort(v,n);
	repA(i,v) cout<<i<<' ';
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
