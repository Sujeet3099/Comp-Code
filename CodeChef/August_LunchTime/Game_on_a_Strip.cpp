#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Game on a Strip Problem Code: ARRGAME
 * link          :   https://www.codechef.com/LTIME87B/problems/ARRGAME
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

void solve(){
	int n;cin>>n;
	vi v(n),mcount;
	int mxcount=0,mxcount2=0,count=0;
	rep(i,0,n){
		cin>>v[i];
		if(v[i]==0)	count++;
		else{
			mcount.pb(count);
			count=0;
		}
	}
	sort(all(mcount),greater<int>());
	mxcount = mcount[0],mxcount2 = mcount[1];
	// cout<<mxcount<<' '<<mxcount2<<endl;
	if(mxcount == mxcount2){
		cout<<"No"<<endl;
		return;
	}
	else if((mxcount/2)+1==mxcount2){
		cout<<"No"<<endl;
	}
	cout<<((mxcount)%2==0?"No":"Yes")<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 4
// 7
// 1 1 0 0 0 1 1
// 8
// 1 0 1 1 1 0 0 1
// 4
// 1 1 0 1
// 4
// 1 1 1 1