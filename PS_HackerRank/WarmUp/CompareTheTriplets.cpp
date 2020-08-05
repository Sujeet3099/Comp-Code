#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	int alice = 0;
	int bob = 0;
	int c = 0;
	int a[2],b[2];
	cin>>a[0]>>a[1]>>a[2];
	cin.ignore();
	cin>>b[0]>>b[1]>>b[2];
	// for(int i=0; i<3; ++i){
	// 	if(a[i] > b[i])
	// 		alice += 1;
	// 	else if(a[i] < b[i])
	// 	 	bob += 1;

	// }
	cout<<alice<<" "<<bob<<" "<<c;
	return 0;
}