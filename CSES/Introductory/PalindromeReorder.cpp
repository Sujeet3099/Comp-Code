#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Palindrome Reorder
 * link          :   https://cses.fi/problemset/task/1755
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rep(i, a, n) for (int i = a; i < (int)n; i++)
#define repA(i, v) for (auto i : v)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n, m) vector<vector<int> > v(n, vector<int>(m));

#define MOD 1000000007

void solve() {
    string s;
    cin >> s;
    vi v(32);
    repA(i, s) {
        int t = (int)i - 'A';
        v[t]++;
    }
    string res = "";
    char oddch = 'A';
    int odds = 0;
    rep(i, 0, v.size()) {
        if (v[i]) {
            int t = v[i];
            if (t % 2 == 1) {
                oddch = (char)(i + 'A');
                odds++;
            }
            char ch = (char)(i + 'A');
            res += string(t / 2, ch);
        }
    }
    if (odds == 1) {
        string t = res;
        reverse(all(t));
        cout << res << oddch << t << "\n";
    } else if (odds == 0) {
        string t = res;
        reverse(all(t));
        cout << res << t << "\n";
    } else {
        cout << "NO SOLUTION\n";
    }
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
// CBPPBFCFAA