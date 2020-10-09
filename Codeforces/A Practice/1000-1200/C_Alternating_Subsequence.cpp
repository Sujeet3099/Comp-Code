#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   C. Alternating Subsequence
 * link          :   https://codeforces.com/problemset/problem/1343/C
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


void solve(){
	// ll n;cin>>n;
	// vi v(n);ll mn = 1e9,mx = -1,c = 1;
	// rep(i,0,n)	cin>>v[i],mn = min(mn,v[i]);
	// bool flow = false;
	// rep(i,0,n-1){
	// 	if( ((v[i]<0&&v[i+1]>0)||(v[i]>0&&v[i+1]<0)) && flow==false){
	// 		c++;
	// 		flow = true;
	// 	}
	// 	else if( ((v[i]<0&&v[i+1]>0)||(v[i]>0&&v[i+1]<0)) && flow==true){
	// 		c++;
	// 		if(i+1==n-1)	mx = max(mx,c);
	// 	}
	// 	else	mx = max(mx,c),c = 1;
	// }
	// ll sum = 0,res = mn;c = 1;
	// rep(i,0,n-1){
	// 	if( ((v[i]<0&&v[i+1]>0)||(v[i]>0&&v[i+1]<0)) && flow==false){
	// 		c++;
	// 		sum+=v[i];
	// 		flow = true;
	// 		if(i+1==n-1){
	// 			c++;
	// 			sum+=v[i+1];
	// 			if(c==mx)	res = max(res,sum);
	// 			break;
	// 		}
	// 	}
	// 	else if( ((v[i]<0&&v[i+1]>0)||(v[i]>0&&v[i+1]<0)) && flow==true){
	// 		c++;
	// 		sum+=v[i];
	// 		if(i+1==n-1){
	// 			// c++;
	// 			sum+=v[i+1];
	// 			if(c==mx)	res = max(res,sum);
	// 			break;
	// 		}
	// 	}
	// 	else{
	// 		sum+=v[i];
	// 		if( ((v[i]<0&&v[i-1]>0)||(v[i]>0&&v[i-1]<0)) && i>0 )	c++;
	// 		// cout<<sum<<' '<<c<<"=="<<endl;
	// 		if(c==mx)	res = max(res,sum);
	// 		sum=0;
	// 		c = 0;
	// 		flow = false;
	// 	}
	// }
	// cout<<res<<' '<<mx<<' '<<c<<endl;



	int n;cin>>n;
	long long a;cin>>a;n--;
	long long g;long long s =0;
	while(n--)
	{
		cin>>g;
		if(g*a>0){if(g>a){a=g;}}
		else{s+=a;a=g;}
	}
	cout<<s+a<<endl;
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
// 5
// 1 2 3 -1 -2
// 4
// -1 -2 -1 -3
// 10
// -2 8 3 8 -4 -15 5 -2 -3 1
// 6
// 1 -1000000000 1 -1000000000 1 -1000000000
