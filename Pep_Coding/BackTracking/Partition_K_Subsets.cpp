#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Partiotion K Subsets
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

void solve(int i, int n, int k, int sets, vector<vi> &ans) {
    static int counter = 1;
    if (i > n) {
        if (sets == k) {
            cout << counter << ". ";
            counter++;
            repA(i, ans) {
                cout << "[";
                int temp = 1;
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
    for (int j = 0; j < ans.size(); j++) {
        if (ans[j].size() > 0) {
            ans[j].push_back(i);
            solve(i + 1, n, k, sets, ans);
            ans[j].pop_back();
        } else {
            ans[j].push_back(i);
            solve(i + 1, n, k, sets + 1, ans);
            ans[j].pop_back();
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int n, k;
    cin >> n >> k;
    vector<vi> ans(k);
    solve(1, n, k, 0, ans);
    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
// 4 3