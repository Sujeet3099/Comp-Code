#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   56. Merge Intervals
 * link          :   https://leetcode.com/problems/merge-intervals/
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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    
    vector<vi> intervals(n,vector<int>(2));
    rep(i,0,n)	cin>>intervals[i][0]>>intervals[i][1];

    sort(all(intervals));

    vector<vector<int>> res;
    res.push_back(intervals[0]);

    for(int i = 1; i < n; i++){
        vector<int> p,q;
        p = intervals[i];
        q = res[res.size()-1];

        if(q[1]<p[0])   res.push_back(p);
        else if(q[1]>=p[0]){
            res.pop_back();
            vector<int> temp(2);
            temp[0] = min(q[0],p[0]);
            temp[1] = max(q[1],p[1]);
            res.push_back(temp);
        }else{
            res.push_back(p);
        }
    }
    
    rep(i,0,res.size())	cout<<res[i][0]<<' '<<res[i][1]<<endl;


    // vector<pair<int,int>> v(n);

    // rep(i,0,n){
    // 	int p,q;cin>>p>>q;
    // 	v[i] = mp(p,q);
    // }
    // vector<pair<int,int>> res;
    // rep(i,0,n-1){
    // 	pair<int,int> p,q;
    // 	p = v[i],q = v[i+1];

    // 	if(q.fi<=p.se){
    // 		res.pb(mp(p.fi,q.se));
    // 		i++;
    // 	}else{
    // 		res.pb(p);
    // 		if(i==n-2)	res.pb(q);
    // 	}
    // }
    // repA(i,res)	cout<<i.fi<<' '<<i.se<<endl;



    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
