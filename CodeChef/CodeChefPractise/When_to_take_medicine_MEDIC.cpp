#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		bool leap;
		string date;
		cin>>date;
		string year_s = date.substr(0,4);
		string month_s = date.substr(5,2);
		string day_s = date.substr(8,2);

		int year = stoi(year_s);
		int month = stoi(month_s);
		int day = stoi(day_s);
		cout<<year<<" "<<month<<" "<<day<<endl;

		// cout<<days;
		// leap = ( year % 400 == 0 ) ||( year % 4 == 0 && year % 100 != 0 ) ? true : false;

	}
	
	return 0;
}