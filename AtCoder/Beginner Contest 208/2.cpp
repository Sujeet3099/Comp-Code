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

int fact(int n) {
    int res = 1;
    int i = n;
    while (i--) {
        res *= n;
        n--;
    }
    return res;
}

void solve() {
    int p;
    cin >> p;
    int i = 10;
    int cnt = 0, coin = 0;
    while (true) {
        if (p == fact(i) && coin <= 100) {
            cnt++;
            cout << cnt;
            return;
        } else if (fact(i) < p && coin <= 100) {
            cnt++;
            coin++;
            p -= fact(i);
        } else if (fact(i) > p) {
            i--;
            coin = 0;
        } else if (p == 0) {
            cout << cnt;
            return;
        }
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
