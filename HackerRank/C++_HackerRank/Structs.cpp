#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Structs
 * link          :   https://www.hackerrank.com/challenges/c-tutorial-struct/problem
 */


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

struct student{
	int a,b;
	string s1,s2;
};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	student s;
	cin>>s.a>>s.s1>>s.s2>>s.b;
	cout<<s.a<<' '<<s.s1<<' '<<s.s2<<' '<<s.b;

	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 15
// john
// carmack
// 10