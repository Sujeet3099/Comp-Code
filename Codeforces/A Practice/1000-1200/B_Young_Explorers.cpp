// #include"bits/stdc++.h"
// using namespace std;

// /**
//  * Copyright (c)
//  * author        :   Sujeet Kumar 
//  * question name :   B. Young Explorers
//  * link          :   https://codeforces.com/problemset/problem/1355/B
//  */

// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define mp make_pair
// #define fi first
// #define se second
// #define all(x) (x).begin(),(x).end()
// #define rep(i,a,n) for (ll i=a;i<n;i++)
// #define repA(i,v) for(auto i:v)
// #define per(i,a,n) for (ll i=n-1;i>=a;i--)
// #define vi vector<int>
// #define vll vector<ll>
// #define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
// ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
// {if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


// void solve(){
// 	int n;cin>>n;
// 	map<int,int> m;
// 	vi v(n),cnt;
// 	set<int> s;
// 	rep(i,0,n){
// 		int t;cin>>v[i];
// 		m[v[i]]++;
// 	}
// 	int res = 0,c = 0,z = 0,p = 0;
// 	repA(i,m){
// 		if(i.se>=i.fi){
// 			res += (i.se/i.fi);
// 			int rem = (i.se%i.fi);
// 			c += rem;
// 			if(rem)	cnt.pb(i.fi);
// 		}
// 		else	cnt.pb(i.fi),c+=i.se;
// 	}
// 	sort(all(cnt));
// 	repA(i,cnt){
// 		z += m[i]%i;
// 		if(z>=i)	res++,c-=z,z = 0;
// 	}
// 	// repA(i,m)	cout<<i.fi<<' '<<i.se<<endl;
// 	// cout<<c<<endl;
// 	cout<<res<<endl;
// 	return ;
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
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
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            if (++cur == a[i]) {
                ans++;
                cur = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}