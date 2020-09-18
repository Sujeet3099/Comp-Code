#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Suffix Three
 * link          :   https://codeforces.com/problemset/problem/1281/A
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


void solve(){
	string s;cin>>s;
	int n = s.size();
	if(s[n-1]=='o')	cout<<"FILIPINO"<<endl;
	else if(s[n-1]=='u')	cout<<"JAPANESE"<<endl;
	else	cout<<"KOREAN"<<endl;
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
// 8
// kamusta_po
// genki_desu
// ohayou_gozaimasu
// annyeong_hashimnida
// hajime_no_ippo
// bensamu_no_sentou_houhou_ga_okama_kenpo
// ang_halaman_doon_ay_sarisari_singkamasu
// si_roy_mustang_ay_namamasu
