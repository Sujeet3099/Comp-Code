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

double getPow(int n, double m) {
    double res = 1;
    rep(i, 0, n) res *= m;
    return res;
}

double getRoot(int n, int m) {
    double low = 1;
    double high = m;
    double eps = 1e-6;
    while ((high - low) > eps) {
        double mid = (high + low) / 2.0;
        if (pow(mid, n) < m)
            low = mid;
        else
            high = mid;
    }
    cout<<low<<" "<<high<<endl;
    return low;
}

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    cout << getRoot(n, m) << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    ll test = 1;
    cin >> test;

    while (test--) solve();

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
