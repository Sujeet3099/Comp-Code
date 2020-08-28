#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   QuickFind
 * link          :   Coursera/Week1
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

void connect(int *a,int n,int p,int q){
	int pid = a[p];
	int qid = a[q];
	rep(i,0,n){
		if(a[i]==pid)
			a[i]=qid;
	}
}
bool isConnected(int *a,int p,int q){
	return a[p]==a[q];
}
void quickUnion(int *a,int p,int q){
	while(i)
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    int a[n+1];
    rep(i,0,n+1){
    	a[i]=i;
    }
    connect(a,n,1,2);
    connect(a,n,5,6);
    connect(a,n,8,9);
    connect(a,n,2,5);
    cout<<(isConnected(a,1,6)?"Yes":"No")<<endl;
	repA(i,a)	cout<<i<<' ';

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
