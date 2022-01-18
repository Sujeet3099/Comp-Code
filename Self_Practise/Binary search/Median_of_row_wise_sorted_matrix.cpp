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

int peakIndexInMountainArray(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    int res = 0;
    while (low <= high) {
        int mid = (high + low) / 2;
        cout << mid << endl;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            res = mid;
            break;
        } else if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

void solve() {
    string firstName, lastName, date, pass;

    cin >> firstName >> lastName >> date >> pass;

    string tempPass = "";
    tempPass += lastName.substr(0, 2);
    tempPass += date.substr(2, 4);
    tempPass += firstName.substr(firstName.size() - 2);

    reverse(tempPass.begin(), tempPass.end());

    cout << (tempPass == pass ? "Accept" : "Not Accept");

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
