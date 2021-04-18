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
    int n, m, k;
    cin >> n >> m >> k;
    int v[n][m];
    int res[n][m];
    res[0][0] = v[0][0];
    int cnt = 0;
    rep(i, 0, n) {
        rep(j, 0, m) {
            cin >> v[i][j];
            if (v[i][j] >= k) cnt++;
        }
    }
    rep(i, 0, n) {
        rep(j, 0, m) {
            res[i][j] = v[i][j];
            if (i - 1 >= 0) res[i][j] += res[i - 1][j];
            if (j - 1 >= 0) res[i][j] += res[i][j - 1];
            if (i - 1 >= 0 && j - 1 >= 0) {
                res[i][j] -= res[i - 1][j - 1];
            }
        }
    }
    int p = min(n, m);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int temp = res[i][j];

            for (int i = 0; i < n - p; i++) {
            }
            for (int i = p - 1; i >= 0; i--) {
                
            }
        }
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    ll test = 1;
    cin >> test;
    while (test--) solve();

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
