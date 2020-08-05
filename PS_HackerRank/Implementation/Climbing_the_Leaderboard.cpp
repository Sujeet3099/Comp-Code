#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);   
    int n;
    cin>>n;

    stack<int> rank;
    int temp;
    int check;
    rep(i,0,n){
        cin>>temp;
        if(rank.empty() || rank.top() > temp)
        	rank.push(temp);
    }

    int m;
    cin>>m;
    vector<int> v(m);
    rep(i,0,m){
    	cin>>v[i];
    }
    
    vector<int> :: iterator lower,it;
    int res;
    int len = rank.size();

    rep(i,0,m){
        while( !rank.empty() && v[i] >= rank.top() )
            rank.pop();
        cout<<rank.size()+1<<endl;
    }

    return 0;
}

/**
 * test Casses
 */
//test 1:-
// 7
// 100 100 50 40 40 20 10
// 4
// 5 25 50 120
// test 2:-
// 6
// 100 90 90 80 75 60
// 5
// 50 65 77 90 102