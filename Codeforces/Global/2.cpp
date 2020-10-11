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
	int n,k;cin>>n>>k;
	string s;cin>>s;
	bool flow = false;
	int c = 0,mx = 0,res = 0;
	rep(i,0,n){
		if(s[i]=='W' && flow)	res+=2;
		if(s[i]=='W' && flow == false)	res++,flow = true;
		else	flow = false;
	}
	vi v,it;
	flow = false;
	rep(i,0,n){
		if(s[i]=='W' && flow)	v.pb(-c),it.pb(-c),v.pb(1),c = 0,flow = false;
		else if(s[i]=='W' && flow == false)	v.pb(1),c = 0;
		if(s[i]=='L' && flow == false)	c++,flow = true;
		else if(s[i]=='L' && flow)	c++;
	}
	if(flow)	v.pb(-c),it.pb(-c);
	// repA(i,v)	cout<<i<<' ';cout<<endl;
	// 
	sort(all(it));
	// repA(i,it)	cout<<i<<' ';cout<<endl;
	repA(i,it){
		if(v[v.size()-1]==i){
			if(-i <= k){
				res += (min(abs(i),k)*2) + 1;
				k -= (-i);
			}
			else{
				res += min(abs(i),k)*2;
				k -= abs(i);
			}
		}
		else{
			res += (min(abs(i),k)*2) + 1;
			k -= abs(i);
		}
		if(k<=0)	break;
	}
	cout<<res<<endl;

	
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
