#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Queen's Attack II
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

void solve(){
	int n,k;
	cin>>n>>k;
	int rq,cq,ro,co;
	cin>>rq>>cq;
	int horleft=cq-1,horright = n-cq,verup=rq-1,verdown = n-rq;
	int leftdiag=(n-(rq-cq)),rightdiag=(rq+cq-1)%n==0?n-1:((rq+cq-1)%n)-1;
	int leftdiagup = cq-1,leftdiagdown = leftdiag - cq;
	int rightdiagdown = leftdiag - (rq - 1),rightdiagup = leftdiag - (rightdiagdown + 1);
	// cout<<rightdiag<<endl;
	if( (rq==1 && cq == 1) || (rq==n && cq==n) ){
		rightdiagup = 0;
		rightdiagdown = 0;
	}
	if((rq==1 && cq == n) || (rq==n&& cq==1) ){
		leftdiagup = 0;
		leftdiagdown = 0;
	}
	cout<<horright<<' '<<horleft<<endl<<verup<<' '<<verdown<<endl
	<<leftdiagup<<' '<<leftdiagdown<<endl<<rightdiagdown<<' '<<rightdiagup<<endl;
	while(k--){
		cin>>ro>>co;
		if(ro==rq){
			if(cq>co)	horleft = min(horleft,abs(cq-co-1));
			else	horright = min(horright,abs(co-cq-1));
		}
		else if(co == cq){
			if(rq>ro)	verup = min(verup,abs(rq-ro-1));
			else	verdown = min(verdown,abs(ro-rq-1));
		}
		else if( abs(abs(rq-ro)-abs(cq-co))==0 && rq+cq == ro+co){
			if(rq>ro)	rightdiagdown = min(rightdiagdown,abs(ro-rq-1));
			else	rightdiagup = min(rightdiagup,abs(rq-ro-1));
		}
		else if( abs(abs(rq-ro)-abs(cq-co))==0 ){
			if(cq>co)	leftdiagup = min(leftdiagup,abs(cq-co-1));
			else	leftdiagdown = min(leftdiagdown,abs(co-cq-1));
		}
	}
	cout<<endl;
	cout<<horright<<' '<<horleft<<endl<<verup<<' '<<verdown<<endl<<leftdiagup<<
	' '<<leftdiagdown<<endl<<rightdiagdown<<' '<<rightdiagup<<endl;
	int res = horright+horleft+verdown+verup+leftdiagdown+leftdiagup+rightdiagup+rightdiagdown;
	cout<<res<<endl;

	return;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 5 3
// 4 3
// 5 5
// 4 2
// 2 3