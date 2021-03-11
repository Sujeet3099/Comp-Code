#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   N Queens
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

bool queenSafe(vector<vi> v,int row,int col){
	for(int i = row-1; i >= 0; i--){
		if(v[i][col] == 1)	return false;
	}
	for(int i = row-1, j = col-1; i >= 0 && j>=0; i--,j--){
		if(v[i][j] == 1)	return false;
	}
	for(int i = row-1, j = col+1; i >= 0 && j<v.size(); i--,j++){
		if(v[i][j] == 1)	return false;
	}
	return true;
}


void placeQueens(vector<vi> v,int row,string res){
	if(v.size()==row){
		cout<<res<<"."<<endl;
		return;
	}
	for(int i = 0; i < v.size() ; i++){
		if(queenSafe(v,row,i) == true){
			v[row][i] = 1;
			placeQueens(v,row+1,res+to_string(row)+"-"+to_string(i)+", ");
			v[row][i] = 0;
		}
	}
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;

    vi2(n,n);
    placeQueens(v,0,"");

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
