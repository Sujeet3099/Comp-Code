#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
		
		int n;
		cin>>n;
		map<int,int> m;
		int result = 0;
		int temp = 0;
		vector<int> v;
		rep(i,0,n){
			cin>>temp;
			m[temp]++;
		}
		// repA(i,m)
		// 	cout<<i.first<<"\t"<<i.second<<endl;
		// auto it = m.begin();
		// for(int i = 0; i < m.size()-1; i++){
		// 	if(abs( (it->first) - ((++it)->first)) <= 1 ){
		// 		--it;
		// 		cout<<it->first<<"========"<<(++it)->first<<"----"<<endl;
		// 		--it;
		// 		cout<<it->second<<"========"<<(++it)->second<<endl;
		// 		--it;
		// 		v.pb( (it->second) + ((++it)->second) );
		// 		--it;
		// 	}
		// 	it++;
		// }
		// // repA(i,v)
		// // 	cout<<i<<" ";
		// // cout<<endl;
		
		// cout<<*max_element(v.begin(),v.end())<<endl;
		
		auto it=m.begin();
        repA(i,m)
            mx=max(mx,i.second);
        for(int i = 0; i<m.size()-1; i++)
        {
            auto cur=it;
            it++;
            auto next=it;
            if(abs(cur->first-next->first)<=1)
                mx=max(mx,cur->second+next->second);
        }
        cout<<mx<<endl;

	}
	return 0;
}

//first approach:
// int max = max_element(m.begin(),m.end(),compare)->first;
// int max2 = m[max+1] > m[max-1] ? m[max+1] : m[max-1];
// result = m[max] + max2;

// cout<<result<<endl;