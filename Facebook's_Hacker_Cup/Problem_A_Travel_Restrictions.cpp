#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(int z,int test){
	int n;
	string s1,s2;
	cin>>n>>s1>>s2;
	int temp = 0;
	std::vector<vector<char> > v(n,vector<char>(n,'0'));
	bool flow = true;

	rep(i,0,n){
		flow = true;
		rep(j,0,n){
			if(i>j){
				for(int k = i; k>j;k--){
					if(s1[k-1] == 'N'){
						flow = false;
						break;
					}
					else if (s2[k-1] == 'N')
						flow = false;
				}
				if(abs(i-j) == 1 && s1[j] == 'Y' && s2[i] == 'Y'){
					// flow = true;
					v[i][j] = 'Y';
				}
				else if(s2[i] == 'Y' && s1[j] == 'Y' && flow == true){
					v[i][j] = 'Y';
				}
				else if(s1[j] == 'N'){
					flow = false;
					v[i][j] = 'N';
				}
				else
					v[i][j] = 'N';
				if(s2[j] == 'N')
					flow = false;

			}
			else if(i == j){
				v[i][j] = 'Y';
				if(s1[j] == 'Y')
					flow = true;
			}
			else if(i<j){
				if(abs(i-j) == 1 && s1[j] == 'Y' && s2[i] == 'Y'){
					// flow = true;
					v[i][j] = 'Y';
				}
				else if(s2[i] == 'Y' && s1[j] == 'Y' && flow == true){
					v[i][j] = 'Y';
				}
				else if(s1[j] == 'N'){
					flow = false;
					v[i][j] = 'N';
				}
				else
					v[i][j] = 'N';
				if(s2[j] == 'N')
					flow = false;
			}
			
		}
	}
	cout<<"Case #"<<(z-test)<<":"<<endl;
	rep(i,0,n){
		rep(j,0,n){
			cout<<v[i][j];
		}
		cout<<endl;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	int z = test;
	while(test--){
	

	solve(z,test);

	}
	
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// 2
// YY
// YY
// 2
// NY
// YY
// 2
// NN
// YY
// 5
// YNNYY
// YYYNY
// 10
// NYYYNNYYYY
// YYNYYNYYNY

