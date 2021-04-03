#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Recursive Digit Sum
 * link          :   https://www.hackerrank.com/challenges/recursive-digit-sum/problem
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

ll result = 0;

void digitSum(string s) {
    if (s.size() == 1) {
        result = stoll(s);
        return;
    }
    ll res = 0;
    rep(i, 0, s.size()) res += (ll)s[i] - '0';
    string newS = to_string(res);
    digitSum(newS);
}

void solve() {
    string s;
    ll k;
    cin >> s >> k;
    digitSum(s);
    digitSum(to_string(result * k));
    cout << result << '\n';
    result = 0;
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
// 9875 4