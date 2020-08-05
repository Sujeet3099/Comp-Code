#include"bits/stdc++.h"

using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int t;
		cin>>t;
		v.push_back(t);
	}
	int q;
	cin>>q;
	while(q--){
		int y;
		cin>>y;
		// cout<<v.size();
		// auto res = lower_bound (v.begin (), v.end (), y);
		// int fres = to_int(*res);
		// (distance(v.begin(), itr))
		// vector<int>::iterator itr = std::find(v.begin(), v.end(), y);
		vector<int>::iterator itr = lower_bound(v.begin(), v.end(), y);

		cout<<(binary_search(v.begin(),v.end(),y) ? "Yes " : "No ")
		<<(itr - v.begin() + 1)<<endl;
		// string res = "No";
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	/* code */
		// 	if (v.at(i) == y)
		// 	{
		// 		/* code */
		// 		res = "Yes";
		// 		break;
		// 	}
		// }
		// std::vector<int>::iterator low,up;
  		//low=std::lower_bound (v.begin(), v.end(), y)
		// cout<<res<<" "<<low<<endl;
	}

	return 0;
}