#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Knights Tour
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

void knightsMove(int n,int row,int col,int moveCount,vector<vi>&chess){
	if(row < 0 || col < 0 || row >= n || col >= n || chess[row][col] )	return;
	if(moveCount == n*n){
		chess[row][col] = moveCount;
		rep(i,0,n){
			rep(j,0,n)	cout<<chess[i][j]<<' ';
			cout<<'\n';
		}
		cout<<'\n'; 
	}


	chess[row][col] = moveCount;
	knightsMove(n,row-2,col+1,moveCount+1,chess);
	knightsMove(n,row-1,col+2,moveCount+1,chess);
	knightsMove(n,row+1,col+2,moveCount+1,chess);
	knightsMove(n,row+2,col+1,moveCount+1,chess);
	knightsMove(n,row+2,col-1,moveCount+1,chess);	knightsMove(n,row+1,col-2,moveCount+1,chess);
	knightsMove(n,row-1,col-2,moveCount+1,chess);
	knightsMove(n,row-2,col-1,moveCount+1,chess);
	chess[row][col] = 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,row,col; cin>>n>>row>>col;
    // int chess[n][n];
    vector<vi> chess(n,vi (n));

    // memset(chess,0,sizeof(chess));

    knightsMove(n,row,col,1,chess);




    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
