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

int dp[1001][1001];

bool targetSum(vi &v, int n, int t) {
    if (t == 0) {
        return true;
    }
    if (n <= 0) {
        return false;
    }
    if (dp[n - 1][t]) return dp[n - 1][t];
    if (v[n - 1] > t) return dp[n - 1][t] = targetSum(v, n - 1, t);
    return dp[n - 1][t] = targetSum(v, n - 1, t) || targetSum(v, n - 1, t - v[n - 1]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << (targetSum(v, n, t) > 0 ? "Yes" : "No") << "\n";

    rep(i, 0, n + 1) {
        rep(j, 0, t + 1) {
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
