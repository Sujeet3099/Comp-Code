#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Non-Divisible Subset
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

int solve(){
	int n,k;
	cin>>n>>k;
	map<int , int> m;
	int rem,temp = 0,temp2 = 0;
	rep(i,0,n){
		cin>>rem;
		m[rem%k]++;
	}
	repA(i,m){
		if((i.first*2)%k == 0){
			temp2++;
			continue;
		}
		auto it = m.find(k-i.first);
		if(it != m.end()){
			// if(i.second == it->second)
			// 	temp2++;
			if(i.second > it->second){
				temp += i.second;
			}
			else if(i.second < it->second)
				temp += it->second;
		}
		else
			temp2 += i.second;
	}
	repA(i,m)
		cout<<i.first<<" "<<i.second<<endl;
	return temp/2+temp2;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test = 1;
	// cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}
	return 0;
}
/**
 * Test Cases:-
 */
// 4 3
// 1 7 2 4
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fi first
// #define se second
// int main()
// {
//     ll n,k,j,max1=0,max2=0;
//     cin>>n>>k;
//     map <ll,ll> maps;
//     for(ll i=0;i<n;i++)
//     {
//         cin>>j;
//         maps[j%k]++;
//     }
//     // for(auto i:maps)
//     // 	cout<<i.first<<" "<<i.second<<endl;
//     for(auto itr1=maps.begin();itr1!=maps.end();itr1++)
//     {
//         auto itr2=maps.find(k-itr1->fi);
//         if(itr2!=maps.end())
//         {
//             if(itr1->fi==itr2->fi) max2++;
//             else if(itr1->se>itr2->se) max1+=itr1->se;
//             else max1+=itr2->se;
//         }
//         else if((itr1->fi*2)%k==0) max2++;
//         else max2+=itr1->se;
//     }
//     // cout<<max1<<" "<<max2<<endl;
//     cout<<max1/2+max2;
//     return 0;
// }