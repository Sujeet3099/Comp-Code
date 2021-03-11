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




// * first Approach ---> its is time consuming;

// void insert(vector<string>&v,string s){
// 	if(v.size()==0){
// 		v.pb(s);
// 		return;
// 	}
// 	if(s > v.back()){
// 		v.pb(s);
// 		return;
// 	}
// 	else{
// 		string temp = v.back();
// 		v.pop_back();
// 		insert(v,s);
// 		v.pb(temp);
// 	}
// }

// void lexicographicalNumbers(vector<string>&v,int n){
// 	if(n == 0)	return;
// 	string s = to_string(n);
// 	insert(v,s);
// 	lexicographicalNumbers(v,n-1);
// }

// ? 2nd Approach ---> its optimised


void lexicographicalNumbers(int i,int n){
	if(i > n)	return;

    cout<<i<<endl;
    for(int j = 0; j < 10; j++){
        lexicographicalNumbers(i*10+j,n);
    }
	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;

    //recursive solution - 1
    for(int i = 1;i<=9;i++) lexicographicalNumbers(i,n);

    //recursive solution - 2
    // vector<string> v;
    // lexicographicalNumbers(v,n);
    // repA(i,v)    cout<<i<<'\n';

    // simple solution - 2
    // vector<string> v(n);
    // rep(i,1,n+1)	v[i-1] = to_string(i);
    // sort(all(v));
    // repA(i,v)	cout<<i<<'\n';





    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */