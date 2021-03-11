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

void reverseString(vector<char>& s) {
    // static int i = 0;
    if(s.size()==0) return;
    char ch = s.front();
    s.erase(s.begin());
    reverseString(s);
    s.push_back(ch);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    vector<char> v(5);
    rep(i,0,5)	cin>>v[i];
    
    reverseString(v);

    repA(i,v)	cout<<i;

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
