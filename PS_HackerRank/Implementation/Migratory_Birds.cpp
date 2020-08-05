#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    map<int , int> birds;
    int n;
    cin>>n;
    int temp;

	rep(i,0,n){
		cin>>temp;
		birds[temp]++;
	}
	int maxValue = 0;
	int maxKey = 0;
	for(auto it = birds.begin(); it != birds.end(); it++){
		//cout<<it->second<<" ";
		if(it->second > maxValue){
			maxValue = it->second;
			maxKey = it->first;
		}
	}
	cout<<maxKey;
	return 0;
}