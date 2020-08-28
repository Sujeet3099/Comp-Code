#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Full Barrier Alchemist Problem Code: PIPSQUIK
 * link          :   https://www.codechef.com/problems/PIPSQUIK
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

int solve(){
	int n,h,y1,y2,l,t,x,count=0;
	cin>>n>>h>>y1>>y2>>l;
	while(n--){
		cin>>t>>x;
		if(l == 0)	continue; 
			// dont know for some reasoon if i dont take whole input codechef considers
			// my answer as wrong so instead of breaking the loop 
			// after finding he is exhausted i am just taking the input and iterating by doing nothing..
		if(t==1){
			if(h-y1<=x){	
				count++;
				continue;
			}
			else if(l>0){
				l--;
				if(l==0)	continue;
				count++;
			}
			else break;
		}
		else{
			if(y2>=x){
				count++;
				continue;
			}
			else if(l>0){
				l--;
				if(l==0)	continue;
				count++;
			}
			else break;
		}
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
// 3
// 6 5 1 2 3
// 2 2
// 2 1
// 1 10
// 2 8
// 2 4
// 1 2
// 1 4 2 5 1
// 2 6
// 6 5 1 2 3
// 2 2
// 2 1
// 1 10
// 2 8
// 2 4
// 1 6