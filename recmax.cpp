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

int mx2 = -1;

void secMax(vi v, int i) {
    static int mx = 0;
    if (i == v.size()) {
        return;
    }
    mx = max(v[i], mx);
    secMax(v, i + 1);
    if (mx - v[i] < mx - mx2 && mx - v[i] != 0) {
        mx2 = v[i];
    }
}

void solve() {
    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n) cin >> v[i];
    secMax(v, 0);
    if (mx2 == -1) {
        cout << "Second Max Doesn't Exist.";
        return;
    }
    cout << mx2;
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
