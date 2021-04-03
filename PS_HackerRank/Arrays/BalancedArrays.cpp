#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Balanced Arrays
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
    int n;
    cin >> n;
    // vi suffix(n), prefix(n), v(n);
    vi v(n);
    int left = 0, right = 0;
    rep(i, 0, n) {
        cin >> v[i];
        if (i < n / 2) {
            left += v[i];
        } else {
            right += v[i];
        }
        // if (i == 0) {
        //     prefix[i] = v[i];
        // } else {
        //     prefix[i] = v[i] + prefix[i - 1];
        // }
    }
    cout << abs(left - right);
    // per(i, 0, n) {
    //     if (i == n - 1) {
    //         suffix[i] = v[i];
    //     } else {
    //         suffix[i] = v[i] + suffix[i + 1];
    //     }
    // }
    // int mn = 1e9;
    // rep(i, 0, n) {
    //     mn = min(mn, abs(prefix[i] - suffix[i + 1]));
    // }
    // cout << mn << '\n';
    // repA(i, v) cout << i << ' ';
    // cout << '\n';
    // repA(i, prefix) cout << i << ' ';
    // cout << '\n';
    // repA(i, suffix) cout << i << ' ';

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    ll test = 1;
    // cin >> test;
    while (test--) solve();

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
