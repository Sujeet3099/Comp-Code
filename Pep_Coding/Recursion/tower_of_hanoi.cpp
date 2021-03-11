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

void tower_of_hanoi(int n,int n1,int n2,int n3){
	if(n==0)	return;
	tower_of_hanoi(n-1,n1,n3,n2);
	cout<<n<<"["<<n1<<" -> "<<n2<<"]"<<endl;
	tower_of_hanoi(n-1,n3,n2,n1);
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    tower_of_hanoi(n,n1,n2,n3);

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
