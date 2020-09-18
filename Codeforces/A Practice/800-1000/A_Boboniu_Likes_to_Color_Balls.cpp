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
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

bool check(int r,int g,int b,int w){
	return (r%2 + b%2 + g%2 + w%2)>1?false:true;
}

string solve(){
	int r,g,b,w,count = 0;cin>>r>>g>>b>>w;
	if(check(r,g,b,w))	return"YES";
	else if(r>0&&b>0&&g>0 && check(r-1,g-1,b-1,w+1))	return "YES";
	else	return "NO";
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
// 4
// 0 1 1 1
// 8 1 9 3
// 0 0 0 0
// 1000000000 1000000000 1000000000 1000000000
