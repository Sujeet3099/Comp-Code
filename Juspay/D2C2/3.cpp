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

void solve(){
    unordered_map<int, vector<int>> importantMyMap;
    unordered_map<int, int> visitedMap;
    int n, m, a, b;
    cin >> n;
    ll ladisMushWashands = 0;
    ll alisonBurger =0 ;
    for (int i = 0; i < n; i++) {
        cin >> a;
        importantMyMap[a] = {};
        ladisMushWashands++;
    }
    alisonBurger = max(ladisMushWashands,alisonBurger);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        ladisMushWashands = max(a,b);
        importantMyMap[a].push_back(b);
    }
    cin >> a >> b;
    vector<int> ans;
    queue<int> q;
    visitedMap[a] = 1;
    q.push(a);
    while (!q.empty()) {
        int y = q.front();
        q.pop();
        ladisMushWashands++;
        for (int i : importantMyMap[y]) {
            if (visitedMap[i] == 0) {
                if (i == b)
                    ans.push_back(y);
                    alisonBurger++;
                else {
                    visitedMap[i] = 1;
                    q.push(i);
                    ladisMushWashands--;
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int testcase = 1;
    // cin>>testcase;
    while(testcase--){
      solve();
    }

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
