// Removes the element present at position.  
// Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
// Removes the elements in the range from start to end inclusive of the start
// and exclusive of the end.
// Ex:v.erase(v.begin()+2,v.begin()+5);
// (erases all the elements from the third element to the fifth element.)	  
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
	int e,r1,r2;
	cin>>e>>r1>>r2;
	v.erase(v.begin()+(e-1));
	v.erase(v.begin()+(r1-1),v.begin()+(r2-1));
	int size = v.size();
	cout<<size<<endl;
	for (int i = 0; i < size; ++i)
	{
		cout<<v.at(i)<<" ";
	}
	
	return 0;
}