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

void solve(string sin,string so){
	
	if(sin.size()==0){
		cout<<so<<endl;
		return;
	}
	string so1 = so, so2 = so;
	so1 += '_';
	so1+=sin[0];
	so2 += sin[0];
	// char d = '_';
	// so1.pb(d);
	// so1.pb(sin[0]);
	// so2.pb(sin[0]);
	sin.erase(sin.begin()+0);
	solve(sin,so1);
	solve(sin,so2);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	string s,so="";cin>>s;
	so+=s[0];
	s.erase(s.begin()+0);
	solve(s,so);
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
