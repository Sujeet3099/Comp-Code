#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int a[1000];
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; ++i){
    	cin>>a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
    	sum += a[i];
    }
    cout<<sum;

	return 0;
}