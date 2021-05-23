#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Chessboard and Queens
 * link          :   https://cses.fi/problemset/task/1624
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

char ch[8][8];
bool check(int row,int col) {
    for (int i = 0; i < 8; i++) {
        if(ch[row][i]=='Q') return false;
    }
    for (int i = 0; i < 8; i++) {
        if (ch[i][col] == 'Q') return false;
    }

    
    return true;
}

void solve() {
    rep(i, 0, 8) rep(j, 0, 8) cin >> ch[i][j];

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
// ........
// ........
// ..*.....
// ........
// ........
// .....**.
// ...*....
// ........