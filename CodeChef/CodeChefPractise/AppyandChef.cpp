#include"bits/stdc++.h"
#define ll long long

using namespace std;
int main(){
	int t;
	cin>>t;
	// cin.ignore();
	std::vector<int> v;
	while(t--){

		ll n,k,a,b;
		cin>>n>>a>>b>>k;
		ll total_multiples = (n/a) + (n/b);
		ll lcm = (a*b)/__gcd(a,b);
		// ll lcm = (2*n)/((a*b)/__gcd(a,b));
		ll determiner = total_multiples - ((2*n)/lcm);
		cout<<(determiner >= k ? "Win" : "Lose")<<endl;
		// for(int i=0; i < n; i++){
		// 	if(i % a == 0 && i % b != 0){
		// 		v.push_back(i);
		// 	}
		// 	else if(i % b == 0 && i % a != 0){
		// 		v.push_back(i);
		// 	}
		// }
		// if(v.size() >= k)
		// 	cout<<"win"<<endl;
		// else if (v.size() < k)
		// 	cout<<"Lose"<<endl;
	}

	
	return 0;
}