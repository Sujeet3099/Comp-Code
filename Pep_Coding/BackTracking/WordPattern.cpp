#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Word Pattern
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

void solve(map<char, string>& m, string s, string t) {
    if (t.size() == 0) {
        if (s.size() == 0) {
            repA(i, m) cout << i.fi << " -> " << i.se << ", ";
            cout << ".\n";
        }
        return;
    }
    char ch = t[0];
    string newT = t.substr(1);
    if (m[ch].size() > 0) {
        string mappedS = m[ch];
        if (s.size() >= mappedS.size()) {
            string left = s.substr(0, mappedS.size());
            if (left == mappedS) {
                string right = s.substr(left.size());
                solve(m, right, newT);
                // m.erase(ch);
            }
        } else
            return;
    } else {
        for (int i = 0; i < s.size(); i++) {
            string left = s.substr(0, i + 1);
            string right = s.substr(i + 1);
            m[ch] = left;
            solve(m, right, newT);
            m.erase(ch);
        }
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    string s, t;
    cin >> s >> t;
    map<char, string> m;
    solve(m, s, t);

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// graphtreesgraph
// pep