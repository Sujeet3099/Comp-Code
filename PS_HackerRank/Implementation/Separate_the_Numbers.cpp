#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Separate the Numbers
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
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

void solve(){
	string s,temp1,temp2;
	cin>>s;
	int n = s.size();
	if(n<=1){
		cout<<"NO"<<endl;
		return;
	}
	ll n1=0,i=1,j=1;
	bool chk = false;
	while(1){
		temp1 = s.substr(n1,i);
		temp2 = s.substr(temp1.size(),j);
		// cout<<temp1<<' '<<temp2<<endl;
		ll a = stoll(temp2);
		ll b =  stoll(temp1);
		if( a - b == 1 ){
			chk = true;
			n1 = b;
			break;
		}
		else{
			if(i>=ceil(n/2.0))	break;
			if(i == j)	j++;
			else	i++;
		}
	}
	cout<<n1<<endl;
	if(chk){
		ll first = n1;
		bool res = true;
		ll p = temp1.size();
		string temp3;
		for (int i = p; i < n; i+=p){
			temp2 = s.substr(i,p);
			ll a = stoll(temp2);
			if(a-n1 == 1 && temp2[0]!='0'){
				n1 = a;
				continue;
			}
			else{
				p++;
				if(i+p>n){
					cout<<"NO"<<endl;
					return;
				}	
				temp3 = s.substr(i,p);
				ll b = stoll(temp3);
				if(b-n1 == 1 && temp3[0]!='0'){
					n1 = b;
					continue;
				}
				else{
					cout<<"NO"<<endl;
					return;
				}
			}
		}
		if(res)	cout<<"YES "<<first<<endl;
		else	cout<<"NO"<<endl;
	}
	else	cout<<"NO"<<endl;
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 7
// 1234
// 91011
// 99100
// 101103
// 010203
// 13
// 1