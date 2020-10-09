#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Cyclic Binary String
 * link          :   https://www.hackerrank.com/contests/hackerrank-hackfest-2020/challenges/cyclic-binary-string/problem
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
	int mx1 = 0,c = 0,mx2 = 0;
	bool flow = false,det = false;
	int i = 0;
	bool karo = false;
	rep(i,0,s.size())	if(s[i]=='1')	karo = true;

	while((s[0]=='0' || s[s.size()-1]=='0') && karo == true){
		s.erase(s.begin()+0);
		s+="0";
		if(s[0]=='1' || s[s.size()-1]=='1')	break;
	}
	// cout<<s<<endl;
	// sort(all(s));
	rep(i,0,s.size()){
		if(flow){
			if(s[i]=='0')	c++;
			else	flow = false,mx2++;			
		}
		else if(s[i]=='0' && flow == false)	c = 0,c++,flow = true ;
		else	mx2++;
		mx1 = max(c,mx1);
	}
	if(mx2==0)	cout<<-1<<endl;
	else	cout<<mx1<<endl;
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
// 0011