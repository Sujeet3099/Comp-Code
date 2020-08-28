#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
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

void del(stack<int>&s,int p){
	if(s.size()==0)
		return;
	if(s.size()==p){
		s.pop();
		return;
	}
	int temp = s.top();
	s.pop();
	del(s,p);
	s.push(temp);
	return;
}
void dele(stack<int>&s,int p){
	if(s.size()==0)
		return;
	if(p==1){
		s.pop();
		return;
	}
	int temp = s.top();
	s.pop();
	dele(s,p-1);
	s.push(temp);
	return;
}
void print(stack<int>&s){
	if(s.size()==0)
		return;
	int temp = s.top();
	s.pop();
	print(s);
	cout<<temp<<" ";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int n,p;cin>>n;
	// p = ceil(n/2.0);
	stack<int>s;
	int temp;
	rep(i,0,n){
		cin>>temp;
		s.push(temp);
	}
	p=n/2 + 1;
	del(s,p);
	// dele(s,p);
	print(s);

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
