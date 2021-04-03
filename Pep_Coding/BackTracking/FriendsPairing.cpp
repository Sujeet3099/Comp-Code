#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Friends Pairing
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

vector<bool> vis(10000);

void solve(int n, int i, string res) {
    static int counter = 1;
    if (i > n) {
        cout << counter << "." << res << '\n';
        counter++;
        return;
    }
    if (vis[i] == true) {
        // cout << i << '\n';
        solve(n, i + 1, res);
    } else {
        vis[i] = true;
        solve(n, i + 1, res + "(" + string(1, i + '0') + ") ");
        for (int j = i + 1; j <= n; j++) {
            if (vis[j] == false) {
                vis[j] = true;
                solve(n, i + 1, res + "(" + string(1, i + '0') + "," + string(1, j + '0') + ") ");
                vis[j] = false;
            }
        }
        vis[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int n;
    cin >> n;
    solve(n, 1, "");

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// 3