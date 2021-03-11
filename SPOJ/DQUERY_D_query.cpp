#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   DQUERY - D-query 
 * link          :   https://www.spoj.com/problems/DQUERY/
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
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

int block;

struct node{
	int l,r,index;
};

bool comp(node a,node b){
	if(a.l/block != b.l/block)	return a.l/block<b.l/block;
	return a.r<b.r;
}
vi freq(1000001);
int cnt = 0;
void add(int pos,vi &v){
	freq[v[pos]]++;
	if(freq[v[pos]]==1)	cnt++;
}
void remove(int pos,vi &v){
	freq[v[pos]]--;
	if(freq[v[pos]]==0)	cnt--;
}

void solve(){
	int n;cin>>n;
	block = sqrt(n);
	vi v(n);
	rep(i,0,n)	cin>>v[i];
	int q;cin>>q;
	vector<node> query;
	rep(i,0,q){
		int l,r;cin>>l>>r;
		l--,r--;
		query.pb({l,r,i});
	}
	sort(all(query),comp);
	int ml = 0,mr = -1;
	vi ans(q);
	rep(i,0,q){

		while(ml>query[i].l)	ml--,add(ml,v);
		while(mr<query[i].r)	mr++,add(mr,v);

		while(ml<query[i].l)	remove(ml,v),ml++;
		while(mr>query[i].r)	remove(mr,v),mr--;

		ans[query[i].index] = cnt;
	}
	repA(i,ans)	cout<<i<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	// cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
