#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Compress the List Problem Code: CMPRSS
 * link          :   https://www.codechef.com/problems/CMPRSS
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
	vi v(n);
	string ans = "";
	rep(i,0,n)	cin>>v[i];
	rep(i,0,n-1){
		if(v[i]+1 == v[i+1]){
			int start = v[i];
			if(v[i+1]+1 == v[i+2] && i+2<n){
				while(v[i+2]+1 == v[i+3] && i+3<n)	i++;
				int end = v[i+2];
				i+=2;
				ans += (to_string(start));
				ans += "...";
				ans += to_string(end);
				ans += ",";
			}
			else{
				ans += to_string(start);
				ans += ",";
			}
		}
		else{
			ans += to_string(v[i]);
			ans += ",";
		}
	}
	int len = ans.size()-1;
	// if(ans[len] == ',')	ans.erase(ans.begin()+len);
	cout<<ans<<endl;
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
// 3
// 12
// 1 2 3 5 6 8 9 10 11 12 15 17
// 4
// 4 5 7 8
// 1
// 4