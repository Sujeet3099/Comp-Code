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
    ll n;
    cin >> n;
    if (n <= 4) {
        if (n == 0) cout << 0 << '\n';
        if (n == 1) cout << 20 << '\n';
        if (n == 2) cout << 36 << '\n';
        if (n == 3) cout << 51 << '\n';
        if (n == 4) cout << 60 << '\n';
        return;
    }
    ll res = (n / 4) * 44;
    ll rem = n % 4;
    if (rem == 3) {
        res += (4 + 51);
    } else if (rem == 2) {
        res += (8 + 36);
    } else if (rem == 1) {
        res += (12 + 20);
    } else if (rem == 0) {
        res -= 44;
        res += 60;
    }
    cout << res << endl;
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
// 5
// 0 1 2 3 4 5
