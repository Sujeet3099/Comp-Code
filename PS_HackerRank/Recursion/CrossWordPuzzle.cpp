#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Crossword Puzzle
 * link          :   https://www.hackerrank.com/challenges/crossword-puzzle/problem
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
#define vi2(n, m) vector<vector<int>> v(n, vector<int>(m));

#define MOD 1000000007
vector<vector<char>> cross(10, vector<char>(10));

bool checkVertically(int row, int col, string s) {
    int n = s.size();
    if (row - 1 >= 0 && cross[row - 1][col] != '+') return false;
    if (row + n < 10 && cross[row + n][col] != '+') return false;
    rep(i, 0, n) {
        if (i + row >= 10) return false;
        if (cross[row + i][col] == '-' || cross[row + i][col] == s[i])
            continue;
        else
            return false;
    }
    return true;
}
bool checkHorizontally(int row, int col, string s) {
    int n = s.size();
    if (col - 1 >= 0 && cross[row][col - 1] != '+') return false;
    if (col + n < 10 && cross[row][col + n] != '+') return false;
    rep(i, 0, n) {
        if (i + col >= 10) return false;
        if (cross[row][col + i] == '-' || cross[row][col + i] == s[i])
            continue;
        else
            return false;
    }
    return true;
}
vector<bool> setVertically(int row, int col, string temp) {
    int n = temp.size();
    vector<bool> rem(n);
    rep(i, 0, n) {
        if (cross[row + i][col] == '-') {
            cross[row + i][col] = temp[i];
            rem[i] = true;
        } else {
            rem[i] = false;
        }
    }
    return rem;
}
vector<bool> setHorizontally(int row, int col, string temp) {
    int n = temp.size();
    vector<bool> rem(n);
    rep(i, 0, n) {
        if (cross[row][col + i] == '-') {
            cross[row][col + i] = temp[i];
            rem[i] = true;
        } else {
            rem[i] = false;
        }
    }
    return rem;
}
void unsetVertically(int row, int col, vector<bool> rem) {
    rep(i, 0, rem.size()) {
        if (rem[i]) cross[row + i][col] = '-';
    }
}
void unsetHorizontally(int row, int col, vector<bool> rem) {
    rep(i, 0, rem.size()) {
        if (rem[i]) cross[row][col + i] = '-';
    }
}
void print() {
    rep(i, 0, 10) {
        rep(j, 0, 10) cout << cross[i][j];
        cout << '\n';
    }
}
bool res = false;
void solveCross(vector<string> v, int pos) {
    if (pos == v.size()) {
        print();
        res = true;
        return;
    }
    string temp = v[pos];
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            if (cross[row][col] == '-' || cross[row][col] == temp[0]) {
                if (checkHorizontally(row, col, temp)) {
                    // cout << "hey\n";
                    vector<bool> rem(temp.size());
                    rem = setHorizontally(row, col, temp);
                    solveCross(v, pos + 1);
                    unsetHorizontally(row, col, rem);
                }
                if (checkVertically(row, col, temp)) {
                    vector<bool> rem(temp.size());
                    rem = setVertically(row, col, temp);
                    solveCross(v, pos + 1);
                    unsetVertically(row, col, rem);
                }
            }
        }
    }
}

void solve() {
    rep(i, 0, 10) rep(j, 0, 10) cin >> cross[i][j];
    vector<string> v;
    char ch;
    string s = "";
    while (cin >> ch) {
        if (ch == ';') {
            v.pb(s);
            s = "";
        } else
            s.pb(ch);
    }
    v.pb(s);
    reverse(all(v));
    solveCross(v, 0);
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
// +-++++++++
// +-++-+++++
// +-------++
// +-++-+++++
// +-++-+++++
// +-++-+++++
// ++++-+++++
// ++++-+++++
// ++++++++++
// ----------
// NIGERIA;CANADA;TELAVIV;CALIFORNIA