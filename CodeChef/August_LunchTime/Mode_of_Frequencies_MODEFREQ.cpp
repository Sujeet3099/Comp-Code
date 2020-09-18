#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Mode of Frequencies Problem Code: MODEFREQ
 * link          :   https://www.codechef.com/LTIME87B/problems/MODEFREQ
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

void solve(){
	int n;cin>>n;
	vi v(n);int mx = 0;
	map<int,int>m,f;
	rep(i,0,n){
		cin>>v[i];
		m[v[i]]++;
	}
	repA(i,m){
		f[i.second]++;
	}
	int mn = 1e7;
	auto it = f.begin();
	mx = it->second;
	mn = it->first;
	repA(i,f){
		if(mx<i.second){
			mn=i.first;
			mx = i.second;
		}
		else if(mx==i.second){
			mn = min(mn,i.first);
		}
	}
	cout<<mn<<endl;
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
// 2
// 8
// 5 9 2 9 7 2 5 3
// 9
// 5 9 2 9 7 2 5 3 1