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
bool isPallindrome(string s) {
    string temp = s;
    reverse(all(temp));
    if (s == temp)
        return true;
    else
        return false;
}
void solve(string s, string res) {
    if (s.size() == 0) {
        cout << res << '\n';
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        string temp = s.substr(0, i + 1);
        string newS = s.substr(i + 1);
        if (isPallindrome(temp)) {
            solve(newS, res + "(" + temp + ") ");
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    string s;
    cin >> s;
    solve(s, "");

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// pep