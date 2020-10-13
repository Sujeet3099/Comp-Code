#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   PIR - Pyramids
 * link          :   https://www.spoj.com/problems/PIR/
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

#define db double 
void findVolume(db u, db v, db w, db U, db V, db W, db b) 
{ 
  
    // Steps to calculate volume of a 
    // Tetrahedron using formula 
    db uPow = pow(u, 2); 
    db vPow = pow(v, 2); 
    db wPow = pow(w, 2); 
    db UPow = pow(U, 2); 
    db VPow = pow(V, 2); 
    db WPow = pow(W, 2); 
  
    db a = 4 * (uPow * vPow * wPow) 
        - uPow * pow((vPow + wPow - UPow), 2) 
        - vPow * pow((wPow + uPow - VPow), 2) 
        - wPow * pow((uPow + vPow - WPow), 2) 
        + (vPow + wPow - UPow) * (wPow + uPow - VPow) 
        * (uPow + vPow - WPow); 
    db vol = sqrt(a); 
    vol /= b; 
  
    cout << fixed << setprecision(4) << vol<<endl; 
} 

void solve(){
	db u,v,w,U,V,W;cin>>u>>v>>w>>U>>V>>W;
	db b = 12;
	findVolume(u, v, w, U, V, W, b); 
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
