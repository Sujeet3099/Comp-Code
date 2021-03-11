#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Target Sum Subsets
 * link          :   
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

void targetSum(vi v,int target,int res,string result){
	
	if(v.size() == 0 || res > target){
		if(res == target){
		cout<<result<<"."<<endl;
		return;
	}
		return;
	}

	// cout<<res<<' '<<result<<endl;
	int temp = v.front();
	v.erase(v.begin());
	string temps = to_string(temp)+", ";
	targetSum(v,target,res+temp,result+temps);
	targetSum(v,target,res,result);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n; cin>>n;
    vi v(n);
    rep(i,0,n)	cin>>v[i];
    int target; cin>>target;

    targetSum(v,target,0,"");

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
