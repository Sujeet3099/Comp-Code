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

// void insert(vi &v,int temp);

// void sort(vi &v){
// 	if(v.size()==1)
// 		return;
// 	int temp = v[v.size()-1];
// 	v.pop_back();
// 	sort(v);
// 	insert(v,temp);
// 	return;
// }
// void insert(vi &v,int temp){
// 	if(v.size()==0||v[v.size()-1]<=temp){
// 		v.pb(temp);
// 		return;
// 	}
// 	int val = v[v.size()-1];
// 	v.pop_back();
// 	insert(v,temp);
// 	v.pb(val);
// 	return;
// }



void insert(vector<int>&v,int temp,int n);

void sortit(vector<int>&v,int n){
	if(n==1)	return;
	int temp = v[n-1];
	v.pop_back();
	sortit(v,n-1);
	insert(v,temp,n-1);
	// v.pb(temp);
}
void insert(vector<int>&v,int temp,int n){
	if(n==0||v[n-1]<temp)
		v.pb(temp);
	else{
		int val = v[n-1];
		v.pop_back();
		insert(v,temp,n-1);
		v.pb(val);
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
    int n;
	cin>>n;
	vi v(n);
    rep(i,0,n)	cin>>v[i];
    sortit(v,n);
    repA(i,v)	cout<<i<<' ';

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
