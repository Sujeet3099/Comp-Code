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
	string str;
	
	rep(i,0,n){
		stack<char> s;
		cin>>str;
		int len = str.size();
		
		rep(j,0,len){
			if(j == 0)
				s.push(str[j]);
			else if( !s.empty() && ( str[j] == '}' && s.top() == '{' || str[j] == ']' 
					&& s.top() == '[' || str[j] == ')' && s.top() == '(' ) )
				s.pop();
			else
				s.push(str[j]);
		}
		cout<<(s.empty() ? "YES" : "NO")<<endl;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    // clock_t start=clock();
    
	ll test = 1;
	// cin>>test;
	while(test--){
	
	solve();

	}
	// clock_t end=clock();
 //    cout<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// {[()]}
// {[(])}
// {{[[(())]]}}
