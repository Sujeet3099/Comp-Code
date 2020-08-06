#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Encryption
 * link          :   https://www.hackerrank.com/challenges/encryption/problem
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

int solve(){
	string s;
	cin>>s;
	// cout<<s<<endl;
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	int len = s.size();
	int col,row;
	col = ceil(sqrt(len));
	row = floor(sqrt(len));
	if(row*col<len){
		row++;
	}
	int count = 0;
	// cout<<len<<" "<<row<<" "<<col<<endl;
	vector< vector<char> >v(row,vector<char>(col,'0'));
	rep(i,0,row){
		rep(j,0,col){
			if(count == len)
				break;
			v[i][j] = s[count];
			count++;
		}
	}
	// rep(i,0,row){
	// 	rep(j,0,col){
	// 		cout<<v[i][j];
	// 	}
	// 	cout<<endl;
	// }
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			if(v[j][i] != '0')
				cout<<v[j][i];
		}
		cout<<" ";
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
	ll test = 1;
	// cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// ifmanwasmeanttostayonthegroundgodwouldhavegivenusroots