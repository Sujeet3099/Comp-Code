#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Concert Tickets
 * link          :   https://cses.fi/problemset/task/1091
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
#define vi2(n, m) vector<vector<int>> v(n, vector<int>(m));

#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> s;
    int t;
    rep(i, 0, n) cin >> t, s.insert(t);
    int i = 0, j = n - 1;

    while (m--) {
        int t;
        cin >> t;
        auto it = s.lower_bound(t);
        if (it == s.end())
            cout << "-1\n";
        else {
            cout << *it << '\n';
            s.erase(it);
        }
    }

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// 5 3
// 5 3 7 8 5
// 4 8 3