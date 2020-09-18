#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Chat room
 * link          :   https://codeforces.com/problemset/problem/58/A
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


void solve(){
	string s;cin>>s;
	string op = "hello",res="";
	bool start = false;
	int j = 0;
	rep(i,0,s.size()){
		if(s[i]==op[j]){
			res+=s[i];
			j++;
		}
	}
	// cout<<res<<endl;
	if(res==op)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
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
// ahhellllloou
// else if(start == true){
// 			if(s[i]!=s[i-1])	op+=s[i];
// 			else if(s[i]==s[i-1] && s[i]=='l' && lc<2){
// 				op+=s[i];
// 			}
// 		}
// 		if(op=="hello"){
// 			cout<<"YES"<<endl;
// 			return;
// 		}