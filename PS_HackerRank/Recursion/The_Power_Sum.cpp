#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   The Power Sum
 * link          :   https://www.hackerrank.com/challenges/the-power-sum/problem
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
int result = 0;

void getRes(int x, int n, int num, int i) {
    if (num == x) {
        result++;
        return;
    } else if (num >= x)
        return;
    if (pow(i, n) > x) return;
    int newNum = num + pow(i, n);
    getRes(x, n, newNum, i + 1);
    getRes(x, n, num, i + 1);
}

void solve() {
    int x, n;
    cin >> x >> n;
    getRes(x, n, 0, 1);
    cout << result << '\n';
    result = 0;
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
// 3
// 10 2
// 100 2
// 100 3