#include"bits/stdc++.h"
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
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007

void goldMine(vector<vi>&v,vector<vector<bool> >&vis,int row,int col,vi &gold){
	if(row < 0 || col < 0 || row >= v.size() || col >= v[0].size() || vis[row][col] == true || v[row][col] == 0)	return;

	vis[row][col] = true;
	// gold += v[row][col];
	gold.pb(v[row][col]);
	goldMine(v,vis,row-1,col,gold);
	goldMine(v,vis,row,col+1,gold);
	goldMine(v,vis,row,col-1,gold);
	goldMine(v,vis,row+1,col,gold);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,m;cin>>n>>m;
    vector<vi> v(n,vi(m));
    vector<vector<bool>> vis(n,vector<bool>(m));

    rep(i,0,n)	rep(j,0,m)	cin>>v[i][j];

    int mx = 0;

	rep(i,0,n){
		rep(j,0,m){
			if(!vis[i][j] && v[i][j] != 0){
				vector<int> bag;
				int sum = 0;
			 	goldMine(v,vis,i,j,bag);
			 	repA(i,bag)	sum+=i;
			 	mx = max(mx,sum);
			}
		}
	}

	cout<<mx;

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
