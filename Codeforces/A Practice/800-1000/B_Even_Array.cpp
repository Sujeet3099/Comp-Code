#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Even Array
 * link          :   https://codeforces.com/problemset/problem/1367/B
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

// int finds(vector<int>v,int f,int index,int n){
// 	int in = (index%2==0?0:1);
// 	for(int i = in; i < n; i+=2){
// 		if(i == index)	continue;
// 		if(v[i] == f)	return 1;
// 	}
// 	return 0;
// }	
void solve(){
	int n,temp,count1 = 0,count2 = 0;cin>>n;
	vi v(n);
	rep(i,0,n)	cin>>v[i];
	rep(i,0,n){
		if(i%2==v[i]%2)	continue;
		else{
			if(i%2==0)	count1++;
			else	count2++;
		}
	}
	temp = -1;
	cout<<(count1==count2?count2:temp)<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
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
// 4
// 3 2 7 6
// 3
// 3 2 6
// 1
// 7
// 7
// 4 9 2 1 18 3 0
