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

vector<vector<char>> puzzle(10, vector<char>(10));

bool canPlaceVer(string s, int i, int j) {
    if (i - 1 >= 0 && puzzle[i - 1][j] != '+') return false;
    if (i + s.size() < puzzle.size() && puzzle[i + s.size()][j] != '+') return false;

    for (int row = 0; row < s.size(); row++) {
        if (i + row >= puzzle.size()) return false;
        if (puzzle[i + row][j] == '-' || puzzle[i + row][j] == s[row])
            continue;
        else
            return false;
    }
    return true;
}

bool canPlaceHor(string s, int i, int j) {
    if (j - 1 >= 0 && puzzle[i][j - 1] != '+') return false;
    if (j + s.size() < puzzle[0].size() && puzzle[i][j + s.size()] != '+') return false;

    for (int col = 0; col < s.size(); col++) {
        if (j + col >= puzzle[0].size()) return false;
        if (puzzle[i][j + col] == '-' || puzzle[i][j + col] == s[col])
            continue;
        else
            return false;
    }
    return true;
}

vector<bool> placeHor(string s, int i, int j) {
    vector<bool> hold(s.size());
    for (int col = 0; col < s.size(); col++) {
        if (puzzle[i][j + col] == '-') {
            puzzle[i][j + col] = s[col];
            hold[col] = true;
        } else {
        	hold[col] = false;
        }
    }
    return hold;
}

vector<bool> placeVer(string s, int i, int j) {
    vector<bool> hold(s.size());
    for (int row = 0; row < s.size(); row++) {
        if (puzzle[i + row][j] == '-') {
            puzzle[i + row][j] = s[row];
            hold[row] = true;
        } else {
        	hold[row] = false;
        }
    }
    return hold;
    
}

void unplaceHor(string s, int i, int j, vector<bool>& hold) {
    for (int col = 0; col < s.size(); col++) {
        if (hold[col]) puzzle[i][j + col] = '-';
    }
}

void unplaceVer(string s, int i, int j, vector<bool>& hold) {
    for (int row = 0; row < s.size(); row++) {
        if (hold[row]) puzzle[i + row][j] = '-';
    }
}

void print() {
    rep(i, 0, 10) {
        rep(j, 0, 10) cout << puzzle[i][j] << ' ';
        cout << endl;
    }
}

void solveCrossWord(vector<string>& v, int n) {
    if (v.size() == n) {
        print();
        // cout<<"DONE"<<'\n';
        return;
    }
    // string s = v.front();
    // v.erase(v.begin());
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            string s = v[n];
            if (puzzle[i][j] == '-' || puzzle[i][j] == s[0]) {
                if (canPlaceHor(s, i, j)) {
                    vector<bool> hold(s.size());
                    hold = placeHor(s, i, j);
                    solveCrossWord(v, n + 1);
                    unplaceHor(s, i, j, hold);
                }
                if (canPlaceVer(s, i, j)) {
                    vector<bool> hold(s.size());
                    hold = placeVer(s, i, j);
                    solveCrossWord(v, n + 1);
                    unplaceVer(s, i, j, hold);
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    rep(i, 0, 10) rep(j, 0, 10) cin >> puzzle[i][j];
    int n;
    cin >> n;
    vector<string> v(n);
    rep(i, 0, n) cin >> v[i];
    // rep(i,0,n)	cout<<v[i]<<endl;
    solveCrossWord(v, 0);

    // rep(i,0,10){
    // 	rep(j,0,10)	cout<<puzzle[i][j]<<' ';
    // 	cout<<endl;
    // }

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC << endl;
    return 0;
}

/**
 * Test Cases:-
 */
