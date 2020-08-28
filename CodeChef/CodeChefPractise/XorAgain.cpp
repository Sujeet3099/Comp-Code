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
	cin.ignore();
	while(t--){
		// std::vector<int> a;
		// std::vector<int> b;
		int n;
		cin>>n;
		std::vector<int> a(n);
		std::vector<int> b;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				int temp2 = a[i] + a[j];
				// b[i] = a[i] + a[j];
				b.pb(temp2);
			}
		}
		int xornum = 0;
		for(int i = 0; i < (n*n); i++){
			xornum ^= b[i];
		}
		cout<<xornum<<endl;
	}
	return 0;
}