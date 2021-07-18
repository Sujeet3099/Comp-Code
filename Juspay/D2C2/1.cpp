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
#define mpv map<int, vector<int>>
#define mpb map<int, bool>
#define vi vector<int>
#define vll vector<ll>
#define vi2(n, m) vector<vector<int>> v(n, vector<int>(m));

#define MOD 1000000007

int status, d;
void dfs(int a, mpb& visitedMap, mpv adjancyList) {
    visitedMap[a] = true;
    if (a == d)
        status = 1;
    for (auto val : adjancyList[a])
        if (visitedMap[val] != true)
            dfs(val, visitedMap, adjancyList);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    int n;
    cin >> n;
    mpv adjancyList;
    int zz = n;
    while (zz--) {
        int x;
        cin >> x;
        adjancyList[x] = {};
    }
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     adjancyList[x] = {};
    // }
    int myEdge;
    cin >> myEdge;
    for (int i = 0; i < myEdge; i++) {
        int x, y;
        cin >> x >> y;
        adjancyList[x].push_back(y);
    }
    int a;
    cin >> a >> d;
    mpb visitedMap;
    status = 0;
    dfs(a, visitedMap, adjancyList);
    cout << (status ? "1" : "0");

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */