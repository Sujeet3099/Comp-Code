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
    int maxRecord = v[0],minRecord = v[0];
    int min = 0,max = 0;

    for (int i = 0; i < n; ++i)
    {
    	if(v[i]>maxRecord){
    		maxRecord = v[i];
    		max++;
    	}
    	else if(v[i]<minRecord){
    		minRecord = v[i];
    		min++;
    	}
    }
    cout<<max<<" "<<min;

	return 0;
}
//10
// 3 4 21 36 10 28 35 5 24 42