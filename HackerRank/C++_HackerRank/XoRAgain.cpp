#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		std::vector<int> a;
		std::vector<int> b;
		int n;
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin>>temp;
			a.pb(temp);
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; i < n; ++i)
			{
				int temp2 = a[i] + a[j];
				b.pb(temp2);
			}
		}
		int xornum;
		for(auto i:b)
			xornum = xornum^b[i];
		cout<<xornum<<endl;
	}
	return 0;
}