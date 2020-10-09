#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Chef and Wedding Arrangements Problem Code: CHEFWED
 * link          :   https://www.codechef.com/AUG20B/problems/CHEFWED
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

int countFreq(string s, string a){
	ll n = s.size();
	char b = a[0];
	int counter = 0;
	rep(i,0,n){
		if(s[i] == b){
			counter++;
		}
	}
	return counter;
}

int solve(){
	int n,k,temp;
	cin>>n>>k;
	map<int,int>m;
	string tables ="",temps="";
	vector<string> v;
	map<int,string>mpt;
	map<string,int>penalty;
	int count = 0,currentconflicts = 0,actualconflicts = 0;
	int costOneTable = k;
	int reducedCost = 0;
	int j = 0,adder;
	rep(i,0,n){
		cin>>temp;
		m[temp]++;
		temps = to_string(temp);
		tables+=temps;
		currentconflicts = countFreq(tables,temps);
		if(currentconflicts==2) actualconflicts+=2;
		else if(currentconflicts>2)	actualconflicts+=1;
		// cout<<actualconflicts<<"======"<<temps<<endl;
		if(actualconflicts>k){
			tables.pop_back();
			actualconflicts-=currentconflicts;
			adder = k+actualconflicts;
			reducedCost+=adder;
			actualconflicts = 0;
			count++;
			mpt[count]=tables;
			tables = "";
			tables+=temps;
		}
	}
	// rep(i,0,n){
	// 	cin>>temp;
	// 	m[temp]++;
	// 	temps = to_string(temp);
	// 	currentconflicts = countFreq(tables,temps);
	// 	if(actualconflicts+currentconflicts<=k){
	// 		// if(i == n-1 && currentconflicts != 0){
	// 		// 	tables+=temps;
	// 		// 	actualconflicts+=currentconflicts+1;	
	// 		// }
	// 		// else{
	// 			tables+=temps;
	// 			actualconflicts+=currentconflicts;
	// 		// }
	// 	}
	// 	else{
	// 		adder = k+actualconflicts;
	// 		reducedCost+=adder;
	// 		actualconflicts = 0;
	// 		count++;
	// 		mpt[count]=tables;
	// 		tables = "";
	// 		tables+=temps;
	// 	}
	// }
	if(tables.size() > 0){
		count++;
		mpt[count] = tables;
		adder = k+actualconflicts;
		reducedCost+=adder;
	}
	repA(i,m){
		if(i.second>1)
			costOneTable += i.second;
	}
	// repA(i,mpt) cout<<i.first<<" "<<i.second<<endl;
	// cout<<costOneTable<<"<==>"<<reducedCost<<endl;
	return (costOneTable<=reducedCost?costOneTable:reducedCost);
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
// 5 1
// 5 1 3 3 3
// 5 14
// 1 4 2 4 4
// 5 2
// 3 5 4 5 1
// 
// 15
// 10 3
// 5 1 5 5 4 4 3 5 1 1 
// 12 1
// 2 6 2 3 4 1 4 1 3 4 5 5 
// 11 3
// 4 1 3 2 2 4 5 3 3 5 1 
// 8 3
// 4 3 2 2 1 2 4 2 
// 6 3
// 3 2 1 1 2 3 
// 8 2
// 3 1 4 3 3 1 3 1 
// 10 2
// 4 2 1 1 5 1 1 2 2 4 
// 7 1
// 3 1 2 1 3 2 3 
// 13 2
// 1 4 3 2 6 5 3 1 4 6 4 6 2 
// 8 1
// 3 2 3 2 3 2 2 1 
// 6 1
// 1 3 1 1 1 2 
// 11 3
// 2 1 3 1 5 2 3 1 1 2 5 
// 12 2
// 4 6 2 4 2 6 4 4 6 6 2 3 
// 7 1
// 3 2 3 2 1 3 1 
// 7 1
// 3 2 3 1 3 3 1
// 
// 
// 7
// 15 2
// 2 1 3 1 1 4 3 4 2 1 2 2 4 2 4 
// 15 3
// 4 2 1 2 4 4 1 4 2 2 1 3 4 3 3 
// 14 3
// 3 2 4 1 3 4 3 4 4 4 2 1 2 2 
// 24 2
// 3 1 4 3 2 2 3 4 1 4 4 4 5 2 3 2 1 2 2 2 2 4 2 4 
// 22 2
// 5 2 5 2 4 5 4 2 4 4 1 3 3 4 3 2 4 4 1 5 5 2 
// 19 4
// 2 5 2 4 2 4 5 1 2 1 5 2 4 4 3 4 4 1 3 
// 28 4
// 5 2 5 1 4 5 2 5 5 4 3 3 2 3 5 5 3 4 3 5 4 1 2 3 2 1 5 3