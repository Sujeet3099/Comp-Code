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
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    vector<int> a(n),b(n);

    rep(i,0,n)	cin>>a[i];
    rep(i,0,n)	cin>>b[i];

    // sort(all(a));
    // sort(all(b));

    int l = 0, r = n - 1;
 	int res = 0;
    while (l < r) {
        int aSum = a[l] + a[r];
        int bSum = b[l] + b[r];
        if (aSum == bSum) {
            // l++;
            r--;
        } else if (aSum < bSum)
            l++;
        else{
        	res++;
            r--;
        }
    }
    rep(i,0,n)	cout<<a[i]<<' ';
    cout<<endl;
    rep(i,0,n)	cout<<b[i]<<' ';
    cout<<endl;
    
    cout<<res<<endl;

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
