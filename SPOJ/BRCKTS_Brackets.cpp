#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   BRCKTS - Brackets
 * link          :   https://www.spoj.com/problems/BRCKTS/
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

void buildTree(int si,int ss,int se,vi &v,vi &segTree){
	if(ss == se){
		segTree[si] = v[ss];
		return;
	}
	int mid = (ss+se)/2;
	buildTree(2*si,ss,mid,v,segTree);
	buildTree(2*si+1,mid+1,se,v,segTree);
	segTree[si] = segTree[2*si] + segTree[2*si+1];
	return;
}

void update(int si,int ss,int se,int qi,vi &v,vi &segTree){
	if(ss == se){
		segTree[si] = v[ss]*(-1);
		return;
	}
	int mid = (ss+se)/2;
	if(qi<=mid)	update(2*si,ss,mid,qi,v,segTree);
	else	update(2*si+1,mid+1,se,qi,v,segTree);
	segTree[si] = segTree[2*si] + segTree[2*si+1];
	return;
}

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	vi v(n+1),segTree(4*n+4);
	rep(i,1,n+1){
		if(s[i-1] == ')') v[i] = 1;
		else v[i] = -1;
	}
	buildTree(1,1,n,v,segTree);
	int q;cin>>q;
	while(q--){
		int a;cin>>a;
		if(a==0){
			if(segTree[1]==0)	cout<<"YES"<<endl;
			else	cout<<"NO"<<endl;
		}
		else	update(1,1,n,a,v,segTree);
	}

	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 10;
	// cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
