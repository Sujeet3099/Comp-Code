#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Gridland Metro
 * link          :   https://www.hackerrank.com/challenges/gridland-metro/problem
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

ll solve(){
	ll n,m,k,r,c1,c2;cin>>n>>m>>k;
	map<ll, pair<ll,ll> > mpi;
	map<ll,vector<pair<ll,ll> > >mp;
	while(k--){
		cin>>r>>c1>>c2;
		mp[r].pb(mp(c1,c2));
		// if(abs(mpi[r].first-mpi[r].second) <= abs(c1-c2))
		// 	mpi[r]=make_pair(c1,c2);
	}
	// repA(i,mpi) cout<<i.first<<' '<<i.second.first<<' '<<i.second.second<<endl;
	ll count = 0,ct=0;
	repA(i,mpi){
		count+=(m-(abs(i.second.first-i.second.second)+1));
		ct++;
	}
	count += m*(n-ct);
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	cout<<solve()<<endl;

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 4 4 3
// 2 2 3
// 3 1 4
// 4 4 4