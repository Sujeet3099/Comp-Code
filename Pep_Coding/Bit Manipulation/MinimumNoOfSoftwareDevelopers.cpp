#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Minimum No Of Software Developers
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

vi resf;

void sol(vi p, int n, int c, vi res, int msk) {
    if (c == p.size()) {
        if (msk == (1 << n) - 1) {
            if (resf.size() == 0 || res.size() < resf.size())
                resf = res;
        }
        return;
    }
    // cout << '1';
    sol(p, n, c + 1, res, msk);
    res.pb(c);
    int m = p[c];
    sol(p, n, c + 1, res, msk | m);
    res.pop_back();
}

void solve() {
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i, 0, n) {
        string s;
        cin >> s;
        mp[s] = i;
    }
    int m;
    cin >> m;
    vi v(m);
    rep(i, 0, m) {
        int t;
        cin >> t;
        rep(k, 0, t) {
            string s;
            cin >> s;
            int j = mp[s];
            v[i] = v[i] | (1 << j);
        }
    }
    vi p;
    sol(v, n, 0, p, 0);
    cout << "[";
    rep(i, 0, resf.size()) {
        cout << resf[i] << (i == resf.size() - 1 ? "]" : ", ");
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
