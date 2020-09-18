#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Three Friends
 * link          :   https://codeforces.com/problemset/problem/1272/A
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
int absdiff(int a,int b,int c){
	return abs(a-b)+abs(b-c)+abs(a-c);
}

void solve(){
	int a,b,c;cin>>a>>b>>c;
	if(a>b)	swap(a,b);
	if(b>c)	swap(b,c);
	// if(a==b && b==c) 	cout<<'0'<<endl;
	// else	cout<<temp-4<<endl;
	int res = absdiff(a,b,c);
	rep(i,-1,2){
		rep(j,-1,2){
			rep(k,-1,2){
				int da = a+i;
				int db = b+j;
				int dc = c+k;
				res = min(res,absdiff(da,db,dc));
			}
		}
	}
	cout<<res<<endl;
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
// 8
// 3 3 4
// 10 20 30
// 5 5 5
// 2 4 3
// 1 1000000000 1000000000
// 1 1000000000 999999999
// 3 2 5
// 3 2 6
	