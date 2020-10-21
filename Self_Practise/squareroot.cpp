#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Square Root Decomposition
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

int minf(int l,int r,int b,vi &v,vi &sq){
	int lb = l/b;
	int rb = r/b;
	int res = v[l];
	if(lb == rb)	rep(i,l,r+1)	res = min(res,v[i]);
	else{
		rep(i,l,(b*(lb+1)))	res = min(res,v[i]);
		rep(i,lb+1,rb)	res = min(res,sq[i]);
		rep(i,(rb*b),r+1)	res = min(res,v[i]);
	}
	return res;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n,m;cin>>n;
	int b = sqrt(n), mn = INT_MAX,c = 0;
	vi v(n),sq;
	rep(i,0,n){
		cin>>v[i];
		mn = min(mn,v[i]);
		c++;
		if(c>=b)	c = 0,sq.pb(mn),mn = INT_MAX;
	}
	// repA(i,v)	cout<<i<<' ';cout<<endl;
	// repA(i,sq)	cout<<i<<' ';
	cin>>m;
	while(m--){
		int l,r;cin>>l>>r;
		cout<<minf(l,r,b,v,sq)<<endl;

	}

	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
