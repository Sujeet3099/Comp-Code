#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL),cout.tie(NULL);
    int arr[100],n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    float zero = 0,positive = 0,negative = 0;
    // cout<<zero<<" "<<positive<<" "<<negative;
    
    for (int i = 0; i < n; ++i)
    {
    	if(arr[i] == 0)
    		zero += 1;
    	else if(arr[i] > 0)
    		positive += 1;
    	else if(arr[i] < 0)
    		negative += 1;
    }
    zero = zero/n;
    positive = positive/n;
    negative = negative/n;
    printf("%0.6f\n%0.6f\n%0.6f\n",positive,negative,zero);
	return 0;
}