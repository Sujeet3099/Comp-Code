#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Append and Delete
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

string solve(){
	string res = "No";
	string s,t;
	int k,temp=0;
	cin>>s>>t>>k;
	int len = s.size();
	int lens = t.size();
	for(int i = 0, j = 0; i <= len; i++,j++){
		if(s[i] == t[j]){
			temp = i;
			continue;
		}
		else if(s[i] != t[j]){
			temp = i;
			break;
		}
	}
	int counter;
	counter = s.size()+t.size()-2*temp;	
	// cout<<len<<" "<<lens<<" "<<temp<<endl;
	// cout<<counter<<endl;
	if(counter == 0 && 2*temp<= k)
		return "Yes";
	if(counter == k)
		res = "Yes";
	if( (counter < k && abs(counter - k) % 2 == 0 ) || (counter < k && t.size() + counter + temp <= k)){		
		res = "Yes";
	}
	if(temp == 0 && counter <= k)
		res = "Yes";
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// hackerhappy
// hackerrank
// 9
// aba
// aba
// 7
// ashley
// ash
// 2
// ashley
// aaaa
// 7
// y
// yu
// 2