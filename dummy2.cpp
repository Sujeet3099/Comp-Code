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

// long taskOfPairing(vector<long> freq) {
//     int n = freq.size();
//     long sum = 0;
//     for (int i = 0; i < n; i++) {
//         if (freq[i] == 1) {
//             if (i > 0) {
//                 if (freq[i - 1] == 1) {
//                     sum++;
//                     cout << i << ' ' << i - 1 << ' ' << sum << "==\n";
//                     freq[i] = 0;
//                     freq[i - 1] = 0;
//                 }
//             }
//         } else if (freq[i] >= 2) {
//             sum += (long)(freq[i] / 2);
//             if (freq[i] % 2 == 0)
//                 freq[i] = 0;
//             else {
//                 if (i > 0) {
//                     if (freq[i - 1] == 1) {
//                         sum++;
//                         cout << i << ' ' << i - 1 << ' ' << sum << "-->\n";
//                         freq[i - 1] = 0;
//                         freq[i] = 0;
//                     }
//                 }
//             }
//         }
//     }
//     return sum;
// }

// void solve() {
// int n;
// cin >> n;
// vector<long> v(n);
// rep(i, 0, n) cin >> v[i];
// cout << taskOfPairing(v);
// }

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (!(v[i] & 1) && v[i] & 2) {
            cnt++;
            cout << v[i] << '\n';
        }
    }
    cout << cnt;
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
