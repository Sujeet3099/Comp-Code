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

int binary_search(vector<int> &v, int start, int last, int element) {
    int mid = (start + last) / 2;
    if (start <= mid) {
        if (v[mid] > element)
            return binary_search(v, start, mid - 1, element);
        else if (v[mid] == element) {
            int l1 = start, h1 = mid - 1;
            int mid1 = (l1 + h1) / 2;
            while (l1<=mid1){
              if(v[mid1]<element)
            }
                return mid;
        } else
            return binary_search(v, mid + 1, last, element);
    } else {
        return -1;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
    cout << binary_search(v, 0, n - 1, 11);
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
