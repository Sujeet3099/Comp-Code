#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Ice Cream Parlor
 * link          :   https://www.hackerrank.com/challenges/icecream-parlor/problem
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
	int m,n;cin>>m>>n;
	vi v(n),s(n);
	rep(i,0,n){
		cin>>v[i];
		s[i] = v[i];
	}
	int res1,res2,t;
	sort(all(s));
	// repA(i,v)	cout<<i<<' ';cout<<endl;
	// repA(i,s)	cout<<i<<' ';cout<<endl;
	rep(i,0,n){
		t = m-s[i];
		if(binary_search(s.begin()+i,s.end(),t)==1){
			res1 = s[i];
			res2 = t;
			break;
		}
	}
	int r1 = find(all(v),res1)-v.begin();
	int r2;
	if(res1==res2)	r2 = find(v.begin()+r1+1,v.end(),res2)-v.begin();
	else	r2 = find(v.begin(),v.end(),res2)-v.begin();
	cout<<min(r1,r2)+1<<' '<<max(r1,r2)+1<<endl;
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
// 2
// 4
// 5
// 1 4 5 3 2
// 4
// 4
// 2 2 4 3