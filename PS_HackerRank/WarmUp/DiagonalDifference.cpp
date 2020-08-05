#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int a[100][100];
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
    	for (int j = 0; j < n; ++j)
    	{
    		cin>>a[i][j];
    	}
    }
    int sumRightDiag = 0;
    int sumLeftDiag = 0;
    for(int i=0; i<n; ++i){
    	for (int j = 0; j < n; ++j)
    	{
    		if(i == j)
    			sumRightDiag += a[i][j];
    	}
    } 
    for(int i = 0; i < n; ++i){
    	for (int j = 0; j < n; ++j)
    	{
    		if(i + j == n - 1)
    			sumLeftDiag += a[i][j];
    			// cout<<a[i][j]<<endl;
    	}
    }
    // cout<<sumRightDiag<<"   "<<sumLeftDiag<<endl;
    int result = abs(sumRightDiag - sumLeftDiag);
    cout<<result;

	return 0;
}