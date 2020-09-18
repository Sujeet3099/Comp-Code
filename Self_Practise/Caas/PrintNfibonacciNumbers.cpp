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
		int a[n+2];
		int f = 0,l = 1;
		for(int i = 0;i < n+2; i++){
			a[i] = l;
			int next = f+l;
			f = l;
			l = next;
		}
		cout<<"The first "<<n<<" non fibonacci Numbers are : --"<<endl;
		int c = 0,i = 1,j = 0;
		while(c<=l){
			if(i<a[j]){
				cout<<i<<' ';
				c++;
			}
			else if(i==a[j]){
				j++;
			}
			else if(i>a[j]){
				j++;
				continue;
			}
			i++;
			if(c==n)	break;
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
