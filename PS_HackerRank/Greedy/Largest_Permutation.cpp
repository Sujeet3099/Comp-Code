#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Largest Permutation
 * link          :   https://www.hackerrank.com/challenges/largest-permutation/problem
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
	int n,k,c = 0;cin>>n>>k;
	vi v(n),s(n);
	rep(i,0,n)	cin>>v[i],s[i] = v[i];
	// for(int i = n-1; i>=0; i--){
	// 	int j = i;
	// 	if(v[i]>v[i-1] && i>0)	c++;
	// 	while(v[j]>v[j-1] && j>0 && c<=k){
	// 		swap(v[j],v[j-1]);
	// 		j--;
	// 	}
	// }
	sort(all(s),greater<int>());
	rep(i,0,n){
		if(v[i]!=s[i] && c<k){
			int t = v[i];
			v[i] = s[i];
			int f = s[i], j;
			for(int k = n-1; k>=0; k--){
				if(v[k]==f){
					j = k;break;
				}
			}
			v[j] = t;
			c++;
		}
	}
	repA(i,v)	cout<<i<<' ';
	cout<<endl;
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
// 5 1
// 4 2 3 5 1