#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    int grade;
  	for (int i = 0; i < n; ++i)
  	{
  		if(v[i] < 38)
  			continue;
  		grade = v[i] / 5;
  		if( ((grade+1) * 5) - v[i] < 3 )
  			v[i] = (grade+1) * 5;
  	}
  	for(auto i:v)
  		cout<<i<<endl;

	return 0;
}