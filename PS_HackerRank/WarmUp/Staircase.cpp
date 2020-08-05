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
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	for (int j = i; j < n-1; ++j)
    	{
    		/* code */
    		cout<<" ";
    	}
    	for (int k = 0; k < i+1; ++k)
    	{
    		/* code */
    		cout<<"#";
    	}
    	cout<<"n";
    }

	return 0;
}