#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Sherlock and The Beast
 * link          :   https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem
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
	int n;cin>>n;
	// int len = 0,i = 0;
	// bool f = false;
	// while(len<n){
	// 	len = 5*i;
	// 	int t = (n-len)%3;
	// 	if(t==0){
	// 		f = true;
	// 		break;
	// 	}
	// 	i++;
	// }
	// if(f){
	// 	string s = "";
	// 	s += string(n-len,'5');
	// 	s += string(len,'3');
	// 	cout<<s<<endl;
	// }
	// else	cout<<-1<<endl;
	
	if(n%3==0)	cout<<string(n,'5')<<endl;
	else if(n%3==1 && n>=10)	cout<<string(n-10,'5')+string(10,'3')<<endl;
	else if(n%3==2 && n>=5)	cout<<string(n-5,'5')+string(5,'3')<<endl;
	else	cout<<-1<<endl;
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
// 4
// 1
// 3
// 5
// 11