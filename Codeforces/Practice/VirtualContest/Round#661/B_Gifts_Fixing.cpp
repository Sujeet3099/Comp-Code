#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Gifts Fixing
 * link          :   https://codeforces.com/contest/1399/problem/B
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

ll solve(){
	ll n;cin>>n;
	vector<ll> a(n),b(n);
	ll mna,mnb;
	rep(i,0,n){
		cin>>a[i];
		if(i==0) mna = a[i];
		else
			mna = min(mna,a[i]);
	}
	rep(i,0,n){
		cin>>b[i];
		if(i==0) mnb = b[i];
		else
			mnb = min(mnb,b[i]);
	}
	ll sum1 = 0,sum2=0,res=0;
	rep(i,0,n){
		sum1=abs(a[i]-mna);
		sum2=abs(b[i]-mnb);
	res+=max(sum1,sum2);
	}

	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	cout<<solve()<<endl;

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// 3
// 3 5 6
// 3 2 3
// 5
// 1 2 3 4 5
// 5 4 3 2 1
// 3
// 1 1 1
// 2 2 2
// 6
// 1 1000000000 1000000000 1000000000 1000000000 1000000000
// 1 1 1 1 1 1
// 3
// 10 12 8
// 7 5 4
