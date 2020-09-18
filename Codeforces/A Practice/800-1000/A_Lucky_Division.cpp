#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Lucky Division
 * link          :   https://codeforces.com/problemset/problem/122/A
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

bool lucky(string s){
	rep(i,0,s.size()){
		if(s[i]=='4' || s[i] =='7')	continue;
		else return false;
	}
	return true;
}

void solve(){
	// int n;cin>>n;
	string s;cin>>s;
	int temp = stoi(s);
	if(lucky(s))	cout<<"YES"<<endl;
	else{
		if(temp%4==0 || temp%7==0 || temp%44==0 || temp%47==0 || temp%74==0 || temp%77 ==0 
			|| temp%447==0 || temp%474==0 || temp%477==0)	cout<<"YES"<<endl;
		else	cout<<"NO"<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 78
