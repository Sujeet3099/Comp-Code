#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Print Kpc
 * link          :   https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-kpc-official/ojquestion
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

string codes[] = {
    ".;",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tu",
    "vwx",
    "yz"
};

vector<string> result;

void kpc(string n,string res,int i){
	if(i==n.size()){
		result.pb(res);
		return;
	}
	int num = n[i]-'0';
	string temp = codes[num];
	rep(j,0,temp.size()){
		kpc(n,res+temp[j],i+1);
		// kpc(n,res,i+1);
	}
    return;	
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    // cin>>test;
    string n;cin>>n;
    string res = "";
    while(test--)    kpc(n,res,0);
    cout<<"[";
    rep(i,0,result.size())	cout<<result[i]<<(i!=result.size()-1?", ":"");
    cout<<']';
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
