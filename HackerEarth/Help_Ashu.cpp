#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Help Ashu
 * link          :   https://www.hackerearth.com/practice/data-structures/advanced-data-structures/fenwick-binary-indexed-trees/practice-problems/algorithm/help-ashu-1/
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

void buildTree(int si,int ss,int se,vi &v,vector<pair<int,int> > &segTree){
	if(ss == se){
		if(v[ss]%2==0)	segTree[si] = {1,0};
		else	segTree[si] = {0,1};
		return;
	}
	int mid = (se+ss)/2;
	buildTree(2*si,ss,mid,v,segTree);
	buildTree(2*si+1,mid+1,se,v,segTree);
	segTree[si] = {(segTree[2*si].fi+segTree[2*si+1].fi),(segTree[2*si].se+segTree[2*si+1].se)};
	return;
}

void update(int si,int ss,int se,int qi,vi &v,vector<pair<int,int>> &segTree){
	if(ss == se){
		if(v[ss]%2==0)	segTree[si] = {1,0};
		else	segTree[si] = {0,1};
		return;
	}
	int mid = (ss+se)/2;

	if(qi<=mid)	update(2*si,ss,mid,qi,v,segTree);
	else	update(2*si+1,mid+1,se,qi,v,segTree);
	segTree[si] = {(segTree[2*si].fi+segTree[2*si+1].fi),(segTree[2*si].se+segTree[2*si+1].se)};
	return;
}

pair<int,int> query(int si,int ss,int se,int qs,int qe,vi &v,vector<pair<int,int>> &segTree){
	if(qs > se || qe < ss)	return {0,0};
	if(qs<=ss && qe>=se)	return segTree[si];
	int mid = (se+ss)/2;
	pair<int,int> left = query(2*si,ss,mid,qs,qe,v,segTree);
	pair<int,int> right = query(2*si+1,mid+1,se,qs,qe,v,segTree);
	// segTree[si] = {(left.fi+right.fi),(left.se+right.se)};
	return {(left.fi+right.fi),(left.se+right.se)};
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	int n;cin>>n;
	vector<int> v(n+1);
	vector<pair<int,int> > segTree(4*n+1);
	rep(i,1,n+1)	cin>>v[i];

	buildTree(1,1,n,v,segTree);

	int q;cin>>q;
	while(q--){
		int q,l,r;cin>>q>>l>>r;
		if(q==0){
			v[l] = r;
			update(1,1,n,l,v,segTree);
		}
		else{
			pair<int,int>res =  query(1,1,n,l,r,v,segTree);
			if(q == 1)	cout<<res.fi<<endl;
			else	cout<<res.se<<endl;
		}
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
