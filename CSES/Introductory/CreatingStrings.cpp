#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Creating Strings
 * link          :   https://cses.fi/problemset/task/1622
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
set<string> st;

void sol(string s, string res) {
    if (s.size() == 0) {
        st.insert(res);
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        s.erase(s.begin() + i);
        sol(s, res + ch);
        s.insert(s.begin() + i, ch);
    }
}

void solve() {
    string s;
    cin >> s;
    sol(s, "");
    cout << st.size() << '\n';
    repA(i, st) cout << i << '\n';
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
// aabac