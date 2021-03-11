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

int resCount = 0;

void printPermutations(string s,string t){
	if(s.size()<=0){
        int zero = 0,one = 0;
        repA(i,t){
            if(i == '0')    zero++;
            else    one++;
        }
        if(zero == one && t.size()>=2) cout<<t<<endl,resCount++;
		return;
	}
	for(int i = 0; i < s.size(); i++){
		string temp = string(1,s[i]);
		string newS = s;
		newS.erase(i,1);
		printPermutations(newS,t+temp);
        printPermutations(newS,t);
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    string s;cin>>s;
    
    printPermutations(s,"");


    cout<<"-----------------"<<endl;
    cout<<resCount;

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
