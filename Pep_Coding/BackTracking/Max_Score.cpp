#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Max Score
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
vi letterCount(26),letterScore(26);

bool setValid(string set){
	vector<int> temp(26);

	for(int i = 0; i < set.size(); i++){
		temp[set[i]-'a']++;
	}

	for(int i = 0; i < 26; i++)	if(temp[i] > letterCount[i])	return false;

	return true;
}

int getScore(string set){
	int res = 0;

	for(int i = 0; i < set.size(); i++){
		res += letterScore[(set[i]-'a')];
	}

	return res;
}

int maxScore(vector<string> v,string set){

	if(setValid(set)==false)	return 0;

	if(v.size()==0)	return getScore(set);

	string temp = v[v.size()-1];
	v.pop_back();

	return max(maxScore(v,set+temp),maxScore(v,set));

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    vector<string> v(n);
    rep(i,0,n)	cin>>v[i];

    int m;cin>>m;

    rep(i,0,m){
    	char ch;cin>>ch;
    	letterCount[(ch-'a')]++;
    }
    rep(i,0,26)	cin>>letterScore[i];

    int res = maxScore(v,"");
    cout<<res;
    // rep(i,0,26)	cout<<letterCount[i]<<' ';

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
// 4
// dog cat dad good
// 9
// a b c d d d g o o
// 1 0 9 5 0 0 3 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0