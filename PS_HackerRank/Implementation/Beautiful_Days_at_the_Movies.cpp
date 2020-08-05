#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */


#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<=n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	int i,j;
	double k;
	cin>>i>>j>>k;
	string temp;
	double res;
	int r;
	int beautiful = 0;

	rep(z,i,j){
		temp = to_string(z);
		reverse(temp.begin(),temp.end());
		r = stoi(temp);
		res = abs(z - r) / k;
		if( floor(res) == ceil(res) )
			beautiful++;
	}

	cout<<beautiful<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 20 23 6