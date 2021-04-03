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

bool checkEqual(vector<vi> &ans) {
    int temp = 0;
    rep(i, 0, ans[0].size()) {
        temp += ans[0][i];
    }
    rep(i, 1, ans.size()) {
        int temp1 = 0;
        rep(j, 0, ans[i].size()) {
            temp1 += ans[i][j];
        }
        if (temp != temp1) return false;
    }
    return true;
}

void solve(vi &v, int n, int k, int sets, vector<vi> &ans) {
    if (v.size() == 0) {
        if (sets == k && checkEqual(ans)) {
            repA(i, ans) {
                cout << "[";
                int temp = 1;
                reverse(all(i));
                repA(j, i) {
                    if (temp == i.size()) {
                        cout << j;
                    } else {
                        cout << j << ", ";
                    }
                    temp++;
                }
                cout << "] ";
            }
            cout << '\n';
        }
        return;
    }
    int temp = v.back();
    v.pop_back();
    for (int i = 0; i < k; i++) {
        if (ans[i].size() > 0) {
            ans[i].pb(temp);
            solve(v, n, k, sets, ans);
            ans[i].pop_back();
        } else {
            ans[i].pb(temp);
            solve(v, n, k, sets + 1, ans);
            ans[i].pop_back();
            break;
        }
    }
    v.push_back(temp);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n) cin >> v[i];
    int k;
    cin >> k;
    vector<vi> ans(k);

    solve(v, n, k, 0, ans);

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// 9
// 3 1 7 6 5 11 9 10 2
// 3