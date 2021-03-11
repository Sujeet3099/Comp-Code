#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   B. AccurateLee
 * link          :   https://codeforces.com/problemset/problem/1369/B
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	int n;cin>>n;
	string s,t = "";cin>>s;
	int sw = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] < s[i-1])sw = 0;
    }
    if(sw){
        cout << s << '\n';
        return;
    }
    string ans;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1')break;
        ans.push_back('0');
    }
    ans.push_back('0');
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == '0')break;
        ans.push_back('1');
    }
    cout << ans << '\n';
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 5
// 10
// 0001111111
// 4
// 0101
// 8
// 11001101
// 10
// 1110000000
// 1
// 1
