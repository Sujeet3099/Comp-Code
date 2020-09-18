#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   A. Fast Food Restaurant
 * link          :   https://codeforces.com/problemset/problem/1313/A
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

int cost[7][3]={{1,0,0},{0,1,0},{0,0,1},{1,1,0},{1,0,1},{0,1,1},{1,1,1}};

void solve(){
	  int a[3], res = 0;
    cin >> a[0] >> a[1] >> a[2];
 
  	sort(a, a + 3,greater<int>());
    for(int i=0;i<7;i++){
        if(a[0]>=cost[i][0]&&a[1]>=cost[i][1]&&a[2]>=cost[i][2])
            ++res,a[0]-=cost[i][0],a[1]-=cost[i][1],a[2]-=cost[i][2];
    }

    //sort(a, a + 3);
  	// for(int i=0; i<3; ++i){
   //  	if(a[i]){
   //    		++res;
   //    		a[i]--;
   //  	}
  	// }
  	// if(a[2] && a[1]){
   //  	a[2]--, a[1]--;
   //  	++res;
  	// }
  	// if(a[2] && a[0]){
   //  	a[2]--, a[0]--;
   //  	++res;
  	// }
  	// if(a[1] && a[0]){
   //  	a[1]--, a[0]--;
   //  	++res;
  	// }
  	// if(a[2] && a[1] && a[0]){
   //  	++res;
  	// }
  	cout << res << endl;
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
// 7
// 1 2 1
// 0 0 0
// 9 1 7
// 2 2 3
// 2 3 2
// 3 2 2
// 4 4 4
