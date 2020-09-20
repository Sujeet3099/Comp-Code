#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
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
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0){if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

void solve(){
	string a;cin>>a;
	int n = a.size();
	unordered_map<char,int> m;
	int count = 0;
	vector<char> ch;
	rep(i,0,n){
		if(i==0){
			ch.pb(a[i]);
			cout<<a[i];
			m[a[i]]++;
		}
		else{
			m[a[i]]++;
			if( ( find(all(ch),a[i]) == ch.end()) )	ch.pb(a[i]);
			
			int si = ch.size();
			if(a[i]==ch[count]){
				while(1){
					if(m[ch[count]]>1 && count<si)	count++;
					else break;
				}
				if(count>=si)	cout<<"#";
				else	cout<<ch[count];
			}
			else{
				if(count>=si)	cout<<"#";
				else	cout<<ch[count];
			}
		}
	}
	cout<<endl;
}
string newSolve(){
	string s;cin>>s;
    string ans="";
    queue <char> rec;
    unordered_map <char,int> mp;
    for(int i=0;s[i]!='\0';i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]==1) rec.push(s[i]);
        while(!rec.empty() && mp[rec.front()]>1)
            rec.pop();
        if(rec.empty()) ans+='#';
        else ans+=rec.front();
    }
    return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		cout<<newSolve()<<endl;
		// solve();
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 5
// gu
// abcabc
// abadbc
// iergxwhddh
// xxikrwmjvsvckfrqxnibkcasompsuyuogauacjrr
