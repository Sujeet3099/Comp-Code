#include "bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
 */

#define ll long long int
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
#define vi2(n, m) vector<vector<int>> v(n, vector<int>(m));

#define MOD 1000000007

vector<int> graphg[1001];
vector<pair<ll, vector<ll>>> pointpt;

void dfs(ll st, ll e, ll vis[], vector<ll> rs, ll w) {
    rs.push_back(st);
    if (st == e) {
        pointpt.push_back({w * (rs.size() - 1), rs});
        return;
    }
    for (auto u : graphg[st]) {
        if (vis[u] == 0) {
            vis[st] = 1;
            dfs(u, e, vis, rs, w);
            vis[st] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();

    ll n, m, t, c, u, v;
    cin >> n >> m >> t >> c;
    while (m--) {
        cin >> u >> v;
        graphg[u].push_back(v);
        graphg[v].push_back(u);
    }
    vector<ll> rs;
    ll w = c;
    ll vis[n + 1] = {0};
    dfs(1, n, vis, rs, w);
    sort(pointpt.begin(), pointpt.end());
    vector<ll> rt[n + 1];
    for (int i = 0; i < pointpt.size(); i++) {
        ll nes = pointpt[i].second.size();
        for (auto u : pointpt[i].second) {
            rt[u].push_back(nes);
        }
    }
    ll trt[n + 1] = {0};
    trt[1] = 1;
    trt[n] = 1;
    for (int i = 2; i <= n - 1; i++) {
        if (rt[i].size() > 0) {
            ll tm = rt[i][0];
            ll up = upper_bound(rt[i].begin(), rt[i].end(), tm) - rt[i].begin();
            trt[i] = up;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << trt[i] << " ";
    return 0;

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC;
    return 0;
}
/**
 * Test Cases:-
 */
