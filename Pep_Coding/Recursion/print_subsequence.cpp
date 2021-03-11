#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-subsequence-official/ojquestion
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

vector<string> subs;

void subsequence(string s,int n,string t){
	if(s.size()==n){
		subs.pb(t);
		return;
	}
	subsequence(s,n+1,t+s[n]);
	subsequence(s,n+1,t+"");
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    // cin>>test;
    string s,t="";cin>>s;
    while(test--)    subsequence(s,0,t);
    reverse(all(subs));
    cout<<"[";
    rep(i,0,subs.size())	cout<<subs[i]<<(i!=subs.size()-1?", ":"");
    cout<<"]";
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
