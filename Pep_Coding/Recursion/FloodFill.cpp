#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Flood Fill
 * link          :   https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/flood-fill-official/ojquestion
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

void mazeFill(vector<vector<int>> v,int row,int col,vector<vector<bool>> visited,string res){
	if(row < 0 || col < 0 || row >= v.size() || col>= v[0].size() || visited[row][col] || v[row][col]){
		return;
	}
	if(row == v.size()-1 && col == v[0].size()-1){
		cout<<res<<endl;
		return;
	}
	visited[row][col] = true;

	mazeFill(v,row+1,col,visited,res+"d");
	mazeFill(v,row,col+1,visited,res+"r");
	mazeFill(v,row-1,col,visited,res+"t");
	mazeFill(v,row,col-1,visited,res+"l");

	visited[row][col] = false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,m;cin>>n>>m;
    vi2(n,m);
    // vector<vector<int> > visited(n,vector<int>(m));
    vector<vector<bool>> visited(n,vector<bool>(m));

    rep(i,0,n)	rep(j,0,m)	cin>>v[i][j];
    
    mazeFill(v,0,0,visited,"");


    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
