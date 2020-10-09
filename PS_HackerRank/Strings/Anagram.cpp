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
	ll n = s.size();
	if(n%2!=0){
		cout<<-1<<endl;return;
	}
	map<char,int> pehla,doosra;
	string f = s.substr(0,n/2),se = s.substr(n/2,n/2);
	for(int i = 0,j = 0;i<n/2&&j<n/2;i++,j++){
		pehla[f[i]]++;
		doosra[se[j]]++;
	}
	int sum = 0;
	for(char i = 'a';i<='z';i++){
		sum += abs(pehla[i]-doosra[i]);
	}
	cout<<sum/2<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 6
// aaabbb
// ab
// abc
// mnop
// xyyx
// xaxbbbxx