#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    std::vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	int t;
    	cin>>t;
    	v.pb(t);
    }
    int max = *max_element(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(v[i] == max)
    		count++;
    }
    cout<<count;
	return 0;
}