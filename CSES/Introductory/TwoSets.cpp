#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Two Sets
 * link          :   https://cses.fi/problemset/task/1092/
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

void solve() {
    ll n;
    cin >> n;
    ll sum = (n * (1 + n)) / 2;
    if (sum % 2 == 0) {
        ll halfSum = sum / 2;
        vi one, two;
        ll oneSum = 0, twoSum = 0;
        for (int i = n; i > 0; i--) {
            if (oneSum + i > halfSum) {
                two.push_back(i);
                twoSum += i;
            } else {
                one.push_back(i);
                oneSum += i;
            }
        }
        cout<<"YES\n";
        cout<<one.size()<<'\n';
        repA(i, one) cout << i << ' ';
        cout << '\n';
        cout << two.size() << '\n';
        repA(i, two) cout << i << ' ';
    } else {
        cout << "NO";
    }
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
// 8