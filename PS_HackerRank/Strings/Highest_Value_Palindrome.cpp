#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Highest Value Palindrome
 * link          :   https://www.hackerrank.com/challenges/richie-rich/problem
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
	int n,k;cin>>n>>k;
	string s;cin>>s;
	int c = k;
	vector<int> v(n,0);
	for(int i = 0; i<(n/2);i++){
		if(s[i]!=s[n-i-1] ){
			s[i] = max(s[i],s[n-i-1]);
			s[n-i-1] = max(s[i],s[n-i-1]);
			v[i] = 1;
			c--;
		}
		if(c<0){
			cout<<-1<<endl;
			return;
		}
	}
	for(int i = 0;i<(n/2);i++){
		if(s[i]!='9'){
			if(v[i]==1)c++;
			if(c>1){
				s[i] = '9';
				s[n-i-1] = '9';
				c-=2;
			}
		}
		if(c<=0)	break;
	}
	if(n%2!=0 && c>0)	s[n/2]='9';
	cout<<s<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 6 3
// 092282