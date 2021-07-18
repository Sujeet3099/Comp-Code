#include "bits/stdc++.h"
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
#define pi pair<int, int>
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repA(i, v) for (auto i : v)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n, m) vector<vector<int> > v(n, vector<int>(m));

#define MOD 1000000007

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    map<int, int> mp;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp]++;
    }
    int res = mp.size() - k;
    if (res <= 0) {
        cout << 0 << '\n';
    } else {
        cout << res * x << '\n';
    }
    return;
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    clock_t start = clock();

    // ll test = 1;
    // cin >> test;
    // while (test--) solve();
    const int k = 10;
    int *const  q = &k;
    printf("%d",*q);

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
