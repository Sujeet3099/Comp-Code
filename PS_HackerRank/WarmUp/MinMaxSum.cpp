#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// std::vector<int> v;
	ll v[5] = {0};
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		cin>>v[i];
	
}	// v.sort();
	sort(v,v+5);
	ll minSum = 0, maxSum = 0;
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		if(i < 4)
			minSum += v[i];
		if (i >= 1)
			maxSum += v[i];

	}
	// for (int i = 1; i < 5; ++i)
	// {
	// 	/* code */
	// 	maxSum += v[i];
	// }
	cout<<minSum<<" "<<maxSum;

	return 0;
}