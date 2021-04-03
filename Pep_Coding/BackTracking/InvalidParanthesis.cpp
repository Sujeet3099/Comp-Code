#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Invalid Paranthesis
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

int getMin(string s) {
    stack<char> st;
    repA(i, s) {
        if (i == '(')
            st.push(i);
        else {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                st.push(i);
        }
    }
    return st.size();
}
bool isValid(string s) {
    stack<char> st;
    repA(i, s) {
        if (i == '(')
            st.push(i);
        else {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                st.push(i);
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}

void solve(string s, int m, map<string, int>& mp) {
    if (m == 0) {
        if (isValid(s)) {
            mp[s]++;
        }
        return;
    }
    rep(i, 0, s.size()) {
        char ch = s[i];
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        solve(left + right, m - 1, mp);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    string s;
    cin >> s;

    int m = getMin(s);
    // cout << m << endl;
    map<string, int> mp;
    solve(s, m, mp);
    repA(i, mp) cout << i.fi << '\n';

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// ()())()