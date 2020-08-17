#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Smallest KMP Problem Code: SKMP
 * link          :   https://www.codechef.com/AUG20B/problems/SKMP
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
	string s,p;
	cin>>s>>p;
	map<char,int> m;

	int n = s.size();
	int mp = p.size();

	if(s == p){
		cout<<p;
		return 0;
	}
	rep(i,0,n){
		m[s[i]]++;
	}
	rep(i,0,mp){
		m[p[i]]--;
		if(m[p[i]] == 0){
			m.erase(p[i]);
		}
	}
	string temp = "";
	char pehla = p[0],last = p[mp-1];
	auto ant = m.end();
	ant--;
	bool str = true;
	int count = 0;;
	// repA(i,m) cout<<i.first<<" "<<i.second<<endl;
	for(auto itr = m.begin(); itr != m.end(); itr++){
		if(itr->first < pehla && itr != ant){
			temp += string(itr->second,itr->first);
		}
		else if(itr == ant && str == true && itr->first<pehla){
			temp+=string(itr->second,itr->first);
			temp+=p;
			str = false;
		}
		else if(itr->first == pehla && itr->first < p[1]){
			temp+=string(itr->second,itr->first);
			temp+=p;
			str = false;
		}
		else if(itr->first == p[count]){
			while(itr->first == p[count]){
				if(p[count] == last && count == mp-1){
					temp+=string(itr->second,itr->first);
					temp+=p;
					str = false;
					// itr--;
				}
				count++;
			}
			if(itr->first<p[count]){
				temp+=string(itr->second,itr->first);
				temp+=p;
				str = false;
			}
			else if(itr->first> p[count] && str == true){
				temp+=p;
				str = false;
				itr--;
			}
		}
		else if(itr->first> p[0] && str == true){
				temp+=p;
				str = false;
				itr--;
			}
		else{
			while(itr!=m.end()){
				temp += string(itr->second,itr->first);
				itr++;
			}
			break;
		}
	}
	
	cout<<temp<<endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
	ll test = 1;
	cin>>test;
	while(test--){
		// cout<<solve()<<endl;
		solve();
	}
    clock_t end=clock();
    cerr<<fixed<<setprecision(40)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// akramkeeanany
// aka
// supahotboy
// bohoty
// daehabshatorawy
// badawy