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

int solve(){
	int n;
	cin>>n;
	stack<int> s;
	stack<int> maxm;
	int q,x;
	while(n--){
		cin>>q;
		if(q == 1){
			cin>>x;
			s.push(x);
			if(s.size() == 1)
				maxm.push(x);
			if(x > maxm.top() )
				maxm.push(x);
			else
				maxm.push(maxm.top());
		}
		else if(q == 2){
			maxm.pop();
			s.pop();
		}
		else{
			cout<<maxm.top()<<endl;
		}
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
// 10
// 1 97
// 2
// 1 20
// 2
// 1 26
// 1 20
// 2
// 3
// 1 91
// 3
