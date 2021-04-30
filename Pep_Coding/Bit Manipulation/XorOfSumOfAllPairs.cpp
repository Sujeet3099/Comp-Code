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

string solve(string s, int k) {
    vector<int> freq(26, 0);
    for (int i = 0;
         i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }
    string ans = "";
    for (int i = 25; i >= 0;) {
        if (freq[i] > k) {
            int temp = k;
            string st(1, i + 'a');
            while (temp > 0) {
                ans += st;
                temp--;
            }

            freq[i] -= k;

            int j = i - 1;
            while (freq[j] <= 0 && j >= 0) {
                j--;
            }

            if (freq[j] > 0 && j >= 0) {
                string str(1, j + 'a');
                ans += str;
                freq[j] -= 1;
            } else {
                break;
            }
        }

        else if (freq[i] > 0) {
            int temp = freq[i];
            freq[i] -= temp;
            string st(1, i + 'a');
            while (temp > 0) {
                ans += st;
                temp--;
            }
        } else {
            i--;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    ll test = 1;
    // cin >> test;
    string s;
    int k;
    cin >> s >> k;
    while (test--) cout << solve(s, k);

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
