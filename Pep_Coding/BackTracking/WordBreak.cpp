#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Word Break
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

void solve(vector<string>& v, string s, string res) {
    if (s.size() == 0) {
        cout << res << '\n';
        return;
    }
    rep(i, 0, s.size()) {
        string left = s.substr(0, i + 1);
        if (find(all(v), left) != v.end()) {
            string right = s.substr(i + 1);
            solve(v, right, res + left + " ");
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    string s;
    int n;
    cin >> n;
    vector<string> v(n);
    rep(i, 0, n) cin >> v[i];
    cin >> s;
    solve(v, s, "");

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// 11
// i like pep coding pepper eating mango man go in pepcoding
// ilikepeppereatingmangoinpepcoding