#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Sudoku Solver
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

void display(vector<vi> v){
	rep(i,0,9){
    	rep(j,0,9)	cout<<v[i][j]<<' ';
    	cout<<endl;
    }
    cout<<endl;
}

bool isSafe(vector<vi> &v,int row,int col,int num){
	for(int i = 0; i < 9; i++){
		if(v[row][i] == num)	return false;
	}
	for(int i = 0; i < 9; i++){
		if(v[i][col] == num)	return false;
	}

	int topCornerRow = (row/3)*3;
	int topCornerCol = (col/3)*3;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(v[topCornerRow+i][topCornerCol+j] == num)	return false;
		}
	}

	return true;
}

void sudokuSolver(vector<vi>&v,int row,int col){

	if(row == v.size()){
		display(v);
		return;
	} 
	int ni = 0, nj = 0;

	if(col == v[0].size()-1 ){
		ni = row+1;
		nj = 0;
	}
	else{
		ni = row;
		nj = col+1;;
	}


	if(v[row][col]!=0){
		sudokuSolver(v,ni,nj);
	}else{
		for(int i = 1; i <= 9; i++){
			if(isSafe(v,row,col,i) == true){
				v[row][col] = i;
				sudokuSolver(v,ni,nj);
				v[row][col] = 0;
			}
		}
	}

	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    vector<vi> v(9,vi (9));

    rep(i,0,9)	rep(j,0,9)	cin>>v[i][j];

    sudokuSolver(v,0,0);

    // display(v);



    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
// 3 0 6 5 0 8 4 0 0
// 5 2 0 0 0 0 0 0 0
// 0 8 7 0 0 0 0 3 1
// 0 0 3 0 1 0 0 8 0
// 9 0 0 8 6 3 0 0 5
// 0 5 0 0 9 0 6 0 0
// 1 3 0 0 0 0 2 5 0
// 0 0 0 0 0 0 0 7 4
// 0 0 5 2 0 6 3 0 0

