#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. Substring Removal Game
 * link          :   https://codeforces.com/problemset/problem/1398/B
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
	string s;cin>>s;
	// s.erase(1,2);
	// cout<<s;
	int alice = 0,bobs = 0,n = s.size();bool bob = false;
	vector<int> res;
	rep(i,0,n){
		if(s[i]=='0')	continue;
		else{
			if(bob==false){
				while(s[i]=='1'){
					alice++;
					i++;
				}
				bob=true;
				res.pb(alice);
				alice=0;
			}
			else{
				while(s[i]=='1'){
					i++;
					bobs++;
				}
				bob=false;
				res.pb(bobs);
				bobs=0;
			}
		}
	}
	sort(all(res),greater<int>());
	// repA(i,res) cout<<i<<' ';
	// cout<<endl;
	int len = res.size(), result = 0;
	rep(i,0,len){
		if(i%2==0)
			result+=res[i];
	}
	return result;
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
// 01111001
// 0000
// 111111
// 101010101
// 011011110111
