#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. XXXXX
 * link          :   https://codeforces.com/problemset/problem/1364/A
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
	int n,x,sum=0,l=-1,r;cin>>n>>x;
    for (int i=0;i<n;i++){
        int a;cin>>a;
        if (a%x){
            if (l==-1)    l=i;
            r=i;
        }
        sum+=a;
    }
    if (sum%x)    cout<<n<<'\n';
    else if (l==-1)    cout<<-1<<'\n';
    else    cout<<(n-min(l+1,n-r))<<'\n';
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
// 3 3
// 1 2 3
// 3 4
// 1 2 3
// 2 2
// 0 6
