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
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll oneTable(int n){
	if(n==1){
		n++;
	}
	else
		n = 1;
	return n;
}

ll solve(){
	ll n,k;
	cin>>n>>k;
	vector<ll>v(n+1);
	map<ll,ll>m;
	ll result = 0,randomTable = 1,onetables = k,splitTable = -1,reducedCost = k;
	vector< vector<ll> > cols(n+1,vector<ll>(n+1,0));
	rep(i,0,n){cin>>v[i];}
	rep(i,0,n){m.clear();rep(j,i,n){cols[i][j] = (j==0)?0:cols[i][j-1];if(m.count(v[j])){if(m[v[j]] == 1){cols[i][j]++;}cols[i][j]++;}m[v[j]]++;}}
	result = 1e18;onetables++;splitTable++;reducedCost++;oneTable(k);ll table = 100;
	vector< vector<ll> > dp(101,vector<ll>(1001,0));
	for(ll i = 0;i< n+1 ;i++){dp[1][i] = cols[0][i-1];onetables = oneTable(101);randomTable++;splitTable--;reducedCost--;}
	for(ll i = 2; i<=table;i++){dp[i][1]=0;onetables = oneTable(101);randomTable++;splitTable--;reducedCost--;}
	onetables = oneTable(101);randomTable++;splitTable--;reducedCost--;
	for(ll i =2;i<=table;i++){for(ll j = 2;j<=n;j++){ll best = 1e18;for(ll p = 1;p<j;p++){best = min(best,dp[i-1][p]+cols[p][j-1]);}dp[i][j] = best;}}
	for(table = 1;table<=100;table++){result = min(table*k+dp[table][n],result);}
	return result;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
