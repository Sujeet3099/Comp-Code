#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Josephenus Problem
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


// it takes o(n) space

// void findPos(vi &v,int k,int pos){
// 	if(v.size()==1)	return;

// 	pos = (pos+k-1)%v.size() ;
// 	v.erase(v.begin()+pos);
// 	findPos(v,k,pos);
// }

// without using vector and making in O(1) space

int findPos(int n,int k){
	if(n == 1)	return 0;
	int x = findPos(n-1,k);
	return (x+k)%n;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,k;cin>>n>>k;
    // vi v(n);
    // rep(i,0,n)	v[i] = i;

    // findPos(v,k,0);
    // cout<<v[0];

    cout<<findPos(n,k);

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
