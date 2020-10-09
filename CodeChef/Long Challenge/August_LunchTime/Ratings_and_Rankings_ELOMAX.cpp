// #include"bits/stdc++.h"
// using namespace std;

// /**
//  * Copyright (c)
//  * author        :   Sujeet Kumar 
//  * question name :   Ratings and Rankings Problem Code: ELOMAX
//  * link          :   https://www.codechef.com/LTIME87B/problems/ELOMAX
//  */

// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define mp make_pair
// #define all(x) (x).begin(),(x).end()
// #define rep(i,a,n) for (ll i=a;i<n;i++)
// #define repA(i,v) for(auto i:v)
// #define per(i,a,n) for (ll i=n-1;i>=a;i--)
// #define vi vector<int>
// #define vll vector<ll>
// #define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

// void solve(){
// 	int n,m;cin>>n>>m;
// 	vi r(n);
// 	rep(i,0,n)	cin>>r[i];

// 	return ;
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL),cout.tie(NULL);
//     clock_t start=clock();

// 	ll test = 1;
// 	cin>>test;
// 	while(test--)	solve();

// 	clock_t end=clock();
// 	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
// 	return 0;
// }
// /**
//  * Test Cases:-
//  */
// // 2
// // 3 3
// // 2500 2500 2520
// // 10 -5 -20
// // 10 15 20
// // -15 17 13
// // 2 3
// // 2125 2098
// // -20 10 -10
// // 10 10 -20
// 
// 
// 
// 
#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Game on a Strip Problem Code: ARRGAME
 * link          :   https://www.codechef.com/LTIME87B/problems/ARRGAME
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
const ll inf=1e9;
void solve()
{
	ll n,m,temp; cin>>n>>m;
	//contest*person
	vector < vector <ll> > rating(m+1,vector <ll>(n));
	ll ranking[m+1][n];
	for(ll i=0;i<n;i++)
		cin>>rating[0][i];
	for(ll i=0;i<n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			cin>>temp;
			rating[j][i]=rating[j-1][i]+temp;
		}
	}
	/*
	for(ll i=0;i<=m;i++)
		for(ll j=0;j<n;j++)
			cout<<rating[i][j]<<(j==n-1?'\n':' ');
	cout<<endl;
	*/
	//calculate the ranking
	map< ll,ll,greater<ll> >ranking1;
	unordered_map<ll,ll>ranking2;
	for(ll i=1;i<=m;i++)
	{
		ranking1.clear();
		ranking2.clear();
		for(ll j=0;j<n;j++)
			ranking1[rating[i][j]]++;
		ll curranking=1;
		for(auto value:ranking1)
		{
			ranking2[value.first]=curranking;
			curranking+=value.second;
		}
		for(ll j=0;j<n;j++)
			ranking[i][j]=ranking2[rating[i][j]];
	}
	/*
	for(ll i=0;i<=m;i++)
		for(ll j=0;j<n;j++)
			cout<<ranking[i][j]<<(j==n-1?'\n':' ');
	cout<<endl;
	*/
	ll counter=0;

	for(ll i=0;i<n;i++)
	{
		ll peakrating,peakranking;
		ll valuerat=-inf,valuerank=inf;
		for(ll j=1;j<=m;j++)
		{
			if(valuerank>ranking[j][i])
			{
				valuerank=ranking[j][i];
				peakranking=j;
			}
			if(valuerat<rating[j][i])
			{
				valuerat=rating[j][i];
				peakrating=j;
			}
		}
		//cout<<peakrating<<" "<<peakranking<<endl;
		if(peakrating!=peakranking)
			counter++;
	}
	cout<<counter<<endl;
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