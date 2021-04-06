#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Number Of Valid Words
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

void solve() {
    int n, m;
    cin >> n;
    vector<string> str(n);
    rep(i, 0, n) cin >> str[i];
    cin >> m;
    vector<string> puzzle(m);
    vector<int> puz(m);
    vi res(m);
    rep(i, 0, m) {
        string t;
        cin >> puzzle[i];
        t = puzzle[i];
        int msk = 0;
        rep(i, 0, t.size()) {
            int c = t[i] - 'a';
            msk |= (1 << c);
        }
        puz[i] = msk;
    }
    rep(i, 0, n) {
        int msk = 0;
        string s = str[i];
        rep(j, 0, s.size()) {
            int c = s[j] - 'a';
            msk |= (1 << c);
        }
        rep(k, 0, m) {
            int mskt = 0;
            int t = puzzle[k][0] - 'a';
            mskt |= (1 << t);
            if ((msk & mskt) == mskt) {
                if ((puz[k] & msk) == msk) res[k]++;
            }
        }
    }

    rep(i, 0, m) {
        cout << puzzle[i] << " -> " << res[i] << '\n';
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
// 7
// aaaa asas able ability actt actor access
// 6
// aboveyz abrodyz abslute absoryz actresz gaswxyz