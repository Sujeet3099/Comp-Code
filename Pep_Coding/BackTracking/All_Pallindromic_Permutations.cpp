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

void solve(map<char, int>& m, char odd, int odds, int len, int count, string res) {
    if (count > len) {
        cout << res;
        if (odds) cout << odd;
        reverse(all(res));
        cout << res << '\n';
        return;
    }
    repA(i, m) {
        if (i.se > 0) {
            char ch = i.fi;

            m[ch]--;
            res.pb(ch);
            solve(m, odd, odds, len, count + 1, res);

            res.pop_back();
            m[ch]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    string s;
    cin >> s;
    map<char, int> m;
    repA(i, s) {
        m[i]++;
    }
    char odd = '0';
    int odds = 0, len = 0;

    repA(i, m) {
        if (i.se % 2 == 1) {
            odd = i.fi;
            odds++;
        }
        m[i.fi] = i.se / 2;
        len += m[i.fi];
    }

    // cout << len << '\n';
    // repA(i, m) cout << i.fi << ' ' << i.se << '\n';
    if (odds > 1) {
        cout << -1 << '\n';
    } else {
        solve(m, odd, odds, len, 1, "");
    }

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
