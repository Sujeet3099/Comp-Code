#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Print Stair Paths
 * link          :   https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-stair-paths-official/ojquestion
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

string dp[1001];

vector<string> result;

void print_stair_paths(int n,string s){
	if(n<0)	return ;
	if(n==0){
		result.push_back(s);
		// cout<<s<<endl;
		return ;
	}
	// if(dp[n]!="-1")	return dp[n];
    print_stair_paths(n-1,s+"1");
    print_stair_paths(n-2,s+"2");
    print_stair_paths(n-3,s+"3");
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    // memset(dp,"1",sizeof(dp));
    ll test = 1;
    // cin>>test;
    int n;cin>>n;
    while(test--)    print_stair_paths(n,"");
    cout<<"[";
    rep(i,0,result.size())	cout<<result[i]<<(i!=result.size()-1?", ":"");
    cout<<"]";
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
