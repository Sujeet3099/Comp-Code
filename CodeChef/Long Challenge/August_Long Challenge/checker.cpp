// #include"bits/stdc++.h"
// using namespace std;

// /**
//  * Copyright (c)
//  * author        :   Sujeet Kumar 
//  * question name :   
//  * link          :   
//  */

// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define mp make_pair
// #define all(x) (x).begin(),(x).end()
// #define rep(i,a,n) for (ll i=a;i<n;i++)
// #define repA(i,v) for(auto i:v)
// #define per(i,a,n) for (ll i=n-1;i>=a;i--)
// #define vi(n) vector<int> v(n);
// #define vll(n) vector<ll> v(n);
// #define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

// int solve(){
// 	string res = "aabccddeeffgghhiiieajei";
// 	string cres = "aabccddeeffgghhiiieajei";
// 	if(res == cres)
// 		return 1;
// 	return 0;
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL),cout.tie(NULL);
// 	ll test = 1;
// 	// cin>>test;
// 	while(test--){
// 		cout<<solve()<<endl;
// 	}
// 	return 0;
// }
// /**
//  * Test Cases:-
//  */
// ll power(ll x,ll y)  
// {
//     ll res=1;
//     x=x%mod;
//     if(x==0) return 0;
//     while(y>0)  
//     { 
//         if(y&1) res=(res*x)%mod;  
//         y = y>>1; 
//         x=(x*x)%mod;  
//     }
//     return res;  
// }  

// void solve()
// {
// 	ll n,a; cin>>n;
// 	for(ll i=0;i<n;i++)
// 	{
// 		cin>>a;
// 		cout<<power(2,n-a)<<" ";
// 	}
// 	cout<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;

// /**
//  * Copyright (c)
//  * author        : Hariom Chaurasia
//  * question name : Smallest KMP
//  * link          : https://www.codechef.com/AUG20B/problems/SKMP
//  */


// #define ll long long
// #define ull unsigned long long
// #define pb(x) push_back(x)
// #define mp(x) make_pair(x)
// #define vi vector<int>
// #define mati vector<vector<int>>
// #define vi vector<int>
// #define all(x) (x).begin(),(x).end()
// #define fo(i,a,n) for (ll i=a;i<n;i++)
// #define foa(i,v) for(auto &i:v)
// #define rfo(i,a,n) for (ll i=n-1;i>=a;i--)

// string solve() {
//     /* Write your code here */
//     string a, b;
//     cin>>a>>b;
//     sort(all(a));
//     while (next_permutation(a.begin(), a.end()))
//     {
//         if (a.find(b)!=std::string::npos)
//         {
//             return a;
//         }
//     }
//     return NULL;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL), cout.tie(NULL);
//     ll test = 1;
//     cin>>test;
//     while (test--) {
//         cout<<solve()<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

/**
 * Copyright (c)
 * author        : Hariom Chaurasia
 * question name : Smallest KMP
 * link          : https://www.codechef.com/AUG20B/problems/SKMP
 */


#define ll long long
#define ull unsigned long long
#define pb(x) push_back(x)
#define mp(x) make_pair(x)
#define vi vector<int>
#define mati vector<vector<int>>
#define vi vector<int>
#define all(x) (x).begin(),(x).end()
#define fo(i,a,n) for (ll i=a;i<n;i++)
#define foa(i,v) for(auto &i:v)
#define rfo(i,a,n) for (ll i=n-1;i>=a;i--)

int solve() {
    /* Write your code here */
    string a, b;
    cin>>a>>b;
    map<char, int> mp;
    for (long i = 0; a[i]; i++) {
        if (mp.find(a[i]) == mp.end()) {
            mp.insert(make_pair(a[i], 1));
        }
        else {
            mp[a[i]]++;
        }
    }
    for (long i=0; b[i];i++)
    {
        mp[b[i]]--;
    }
    char c = b[0], d;
    for (int i = 0;b[i];i++)
    {
        if (b[i]!=c)
        {
            d=b[i];
            break;
        }
    }
    bool flag1 = (c<d)? 0:1;
    bool flag2 = 0;
    for (auto it=mp.begin();it!=mp.end();it++)
    {
        if (it->first<c||flag2)
        {
            while ((it->second)--)
                cout<<it->first;
        }
        else
        {
            if (it->first==c && !flag1)
            {
                while ((it->second)--)
                    cout<<it->first;
                cout<<b;
            }
            else
            {
                cout<<b;
                while ((it->second)--)
                    cout<<it->first;
            }
            flag2 = 1;

        }
    }
    cout<<"\n";
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll test = 1;
    cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}