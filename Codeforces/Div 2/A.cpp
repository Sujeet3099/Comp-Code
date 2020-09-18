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
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
{if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}


 
// void solve(){
// 	vector<int> ans;
// 	int n;
// 	cin >> n;
// 	int c1 = 0;
// 	for(int i = 0; i < n; i++){
// 		int a;
// 		cin >> a;
// 		if(a == 0){
// 			if(c1){
// 				c1 = 0;
// 			}
// 			ans.push_back(0);
// 		} else if(a == 1){
// 			if(c1){
// 				ans.push_back(1);
// 				ans.push_back(1);
// 				c1 = 0;
// 			} else {
// 				c1 = 1;
// 			}
// 		}
// 	}
// 	cout << ans.size() << '\n';
// 	for(int a : ans){
// 		cout << a << ' ';
// 	}
// 	cout << '\n';
// }

void solve(){
	int n;cin>>n;
	vector<int> v,ans;
	int temp;int oneeven=0,oneodd=0;
	rep(i,0,n){
		cin>>temp;
		v.pb(temp);
		if(i%2==0 && temp==1)	oneeven++;
		else if(i%2!=0 && temp==1) oneodd++;
	}
	bool odd = false,even = false;
	if(oneeven > oneodd){
		even = true;
		odd = false;
		rep(i,0,n){
			if(i%2!=0 && oneeven!=oneodd && odd == true && v[i]==1){
				oneodd--;
				// ans.pb(v[i]);
				swap(oneeven,oneodd);
				odd = false;
				even = true;
			}
			else if(i%2==0 && oneeven != oneodd && even == true && v[i]==1){
				oneeven--;
				swap(oneeven,oneodd);
				odd = true;
				even = false;	
			}
			else ans.pb(v[i]);
		}
	}
	else if(oneeven==oneodd){
		rep(i,0,n)	ans.pb(v[i]);
	}
	else{
		even = false;
		odd = true;
		rep(i,0,n){
			if(i%2!=0 && oneeven!=oneodd && odd == true && v[i]==1){
				oneodd--;
				// ans.pb(v[i]);
				swap(oneeven,oneodd);
				odd = false;
				even = true;
			}
			else if(i%2==0 && oneeven != oneodd && even == true && v[i]==1){
				oneeven--;
				swap(oneeven,oneodd);
				odd = true;
				even = false;	
			}
			else ans.pb(v[i]);
		}
	}
	cout<<ans.size()<<endl;
	repA(i,ans)	cout<<i<<' ';
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
