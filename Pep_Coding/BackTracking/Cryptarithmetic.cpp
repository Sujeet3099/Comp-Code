#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
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

#define MOD 1000000007

map<char,int> m;
string s1,s2,s3;
vector<bool> num(10,0);
ll co = 0;

bool isEqual(){
	
	string num1= "", num2 = "", num3 = "";

	rep(i,0,s1.size())	num1 += (char)(m[s1[i]]+'0');
	rep(i,0,s2.size())	num2 += (char)(m[s2[i]]+'0');
	rep(i,0,s3.size())	num3 += (char)(m[s3[i]]+'0');

	int n1 = stoi(num1),n2 = stoi(num2),n3 = stoi(num3);

	if(n1+n2 == n3)	return true;
	return false;
}

void solve(string s,int pos){
	co++;
	if(pos == s.size()){
		if(isEqual()){
			repA(i,m)	cout<<i.fi<<'-'<<i.se<<' ';
			cout<<'\n';
		}
		return;
	}
	char ch = s[pos];
	for(int i = 0; i < 10; i++){
		if(num[i] == false){
			num[i] = true;
			m[ch] = i;
			solve(s,pos+1);
			m[ch] = -1;
			num[i] = false;
		}
	}
	return;
}

// void solve(auto itr){
// 	co++;
// 	if(itr == m.end()){
// 		if(isEqual()){
// 			repA(i,m)	cout<<i.fi<<'-'<<i.se<<' ';
// 			cout<<'\n';
// 		}
// 		return;
// 	}
// 	for(int i = 0; i < 10; i++){
// 		if(num[i] == false){
// 			itr->se = i;
// 			num[i] = true;
// 			solve(++itr);
// 			num[i] = false;
// 			--itr;
// 			itr->se = -1;
// 		}
// 	}
// 	return;
// }


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    cin>>s1>>s2>>s3;

    rep(i,0,s1.size())	m[s1[i]] = -1;
    rep(i,0,s2.size())	m[s2[i]] = -1;
    rep(i,0,s3.size())	m[s3[i]] = -1;

    // auto itr = m.begin();
    // solve(itr);
    string unique = "";
    repA(i,m)	unique += i.fi;
    solve(unique,0);

    cout<<co;




    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */

