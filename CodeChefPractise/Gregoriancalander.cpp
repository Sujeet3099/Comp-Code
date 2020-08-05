#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
int isLeap(int date){
	if(date % 4 == 0){
		if(date % 100 == 0){
			if(date % == 400)
				return true;
			else
				return false;
		}
		else 
			return true;
	}
	else 
		return false;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int t;
	cin>>t;
	string day[7] = {"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
	// cout<<day[1];
	while(t--){
		int dateSet = 2001;
		int in;
		cin>>in;
		int m = abs(dateSet -in);
		int l = floor(m/4);
		
		m += l;
		int result = m%7;
		cout<<result;
		// cout<<(dateSet > in ? )

		cout<<day[result]<<endl;
	}
	return 0;
}
//saturday
// tuesday
// wednesday