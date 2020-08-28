#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Ciel and A-B Problem Problem Code: CIELAB
 * link          :   https://www.codechef.com/problems/CIELAB
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

int solve(){
	int a,b;
	cin>>a>>b;
	int res = abs(a-b);
	string result = to_string(res),temp;
	int len = result.size();
	// deque<char> d(len,result);
	// d = result;
	temp = result[0];
	result.pop_back();
	int temp2 = stoi(temp);
	temp2-=1;
	res = ( temp2 <= 0 ? temp2+2:temp2);
	temp = to_string(res);
	res = stoi(result+temp);
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
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
// 5858 1234