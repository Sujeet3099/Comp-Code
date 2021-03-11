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

vector<bool> vis(100001);
priority_queue<pair<int,string>, vector<pair<int,string>>,greater<pair<int,string>> > pr;
// priority_queue<pair<int,string> > pr; 
// priority_queue<pair<int,int> > pr;

int smallestWt = 1e9,largestWt = -1e9,ceilWt = 1e9,floorWt = -1e9,criteria,kthLargestPath,k;
string smallestPath,largestPath,ceilPath,floorPath;
void dfs(int src,int dest,vector<vector<pair<int,int>>>&v,string s,int wt){
	if(src == dest){
		// cout<<s+to_string(src)<<endl;
		if(wt < smallestWt)	smallestPath = s+to_string(src)+"@"+to_string(wt),smallestWt = wt;
		else if(wt > largestWt)	largestPath = s+to_string(src)+"@"+to_string(wt),largestWt = wt;

		if(wt > criteria && wt < ceilWt)	ceilWt = wt,ceilPath = s+to_string(src)+"@"+to_string(wt);
		else if(wt < criteria && wt > floorWt)	floorWt = wt,floorPath = s+to_string(src)+"@"+to_string(wt);

		// if(pr.size()<k)	pr.push(mp(s+to_string(src)+"@"+to_string(wt),wt));
		if(pr.size()<k)	pr.push(mp(wt,s+to_string(src)+"@"+to_string(wt)));
		else{
			if(wt > pr.top().fi){
				pr.pop();
				pr.push(mp(wt,s+to_string(src)+"@"+to_string(wt)));
			}
		}
		return;
	}

	vis[src] = true;
	s+=to_string(src);
	repA(i,v[src]){
		if(!vis[i.fi])	dfs(i.fi,dest,v,s,wt+i.se);
	}
	vis[src] = false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>> v(n);

    rep(i,0,m){
    	int a,b,wt;cin>>a>>b>>wt;
    	v[a].pb(mp(b,wt));
    	v[b].pb(mp(a,wt));
    }

    int src,dest;cin>>src>>dest;
    cin>>criteria>>k;
    dfs(src,dest,v,"",0);

    cout<<"Smallest Path = "<<smallestPath<<endl;
    cout<<"Largest Path = "<<largestPath<<endl;
    cout<<"Just Larger Path than "<<criteria<<" = "<<ceilPath<<endl;
    cout<<"Just Smaller Path than "<<criteria<<" = "<<floorPath<<endl;
    cout<<k<<"th largest path = "<<pr.top().se;
    // repA(i,v[4])	cout<<i<<' ';
    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */


