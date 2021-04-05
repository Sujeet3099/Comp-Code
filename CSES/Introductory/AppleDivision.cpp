#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Apple Division
 * link          :   https://cses.fi/problemset/task/1623
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define repA(i, v) for (auto i : v)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n, m) vector<vector<int> > v(n, vector<int>(m));

#define MOD 1000000007
ll apple(vll &v, ll i, ll sumNow, ll sumTotal) {
    if (i == 0) {
        return abs((sumTotal - sumNow) - sumNow);
    } else {
        return min(apple(v, i - 1, sumNow + v[i], sumTotal), apple(v, i - 1, sumNow, sumTotal));
    }
}

void solve() {
    ll n;
    cin >> n;
    vll v(n);
    ll total = 0;
    rep(i, 0, n) cin >> v[i], total += v[i];
    cout << apple(v, n, 0, total);
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
// 5
// 3 2 7 4 1

// #include <bits/stdc++.h>
// #define lli long long int
// #define li long int
// #define ld long double
// using namespace std;
// const lli mod = 1e9 + 7;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     lli n, total = 0, ans = INT_MAX;
//     cin >> n;
//     li arr[n];
//     for (lli i = 0; i < n; i++) {
//         cin >> arr[i];
//         total += arr[i];
//     }
//     for (lli i = 0; i < 1 << n; i++) {
//         lli s = 0;
//         for (lli j = 0; j < n; j++) {
//             if (i & 1 << j) s += arr[j];
//         }
//         lli curr = abs((total - s) - s);
//         ans = min(ans, curr);
//     }
//     cout << ans;
//     return 0;
// }
