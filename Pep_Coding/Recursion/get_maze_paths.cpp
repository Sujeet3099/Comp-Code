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

vector<string> ans;

void maze_path(int n,int m,int x,int y,string path){
	if(x==m-1 && y==n-1){
		ans.pb(path);
		return;
	}
	if(x==m || y==n){
		return;
	}
	maze_path(n,m,x+1,y,path+"h");
	maze_path(n,m,x,y+1,path+"v");
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,m;cin>>n>>m;
    maze_path(n,m,0,0,"");
    cout<<"[";
    rep(i,0,ans.size())	cout<<ans[i]<<(i!=ans.size()-1?", ":"");
    cout<<"]";
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
