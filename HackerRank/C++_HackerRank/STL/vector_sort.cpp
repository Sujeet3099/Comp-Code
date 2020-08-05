// vector<int>v; (creates an empty vector of integers)
// int size=v.size();
// v.push_back(x);(where x is an integer.The size increases by 1 after this.)
// v.pop_back(); (After this the size decreases by 1)
// sort(v.begin(),v.end()); (Will sort all the elements in the vector)
// 

#include"bits/stdc++.h"

using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<v.at(i)<<" ";
	}
	return 0;
}