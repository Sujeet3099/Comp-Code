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
map<string,int> m;
int subset(string s,string so){
	static int count = 0;
	if(s.size()==0){
		// cout<<so<<endl;
		m[so];
		count++;
		return count;
	}
	string so1 = so,so2=so;
	so2.pb(s[0]);
	s.erase(s.begin()+0);
	subset(s,so1);
	subset(s,so2);
	return count;
}

void solve(){
	string s,so="";cin>>s;
	int n = s.size();
	cout<<subset(s,so)<<" Subsets in Total";
	repA(i,m)	cout<<i.first<<endl;

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
