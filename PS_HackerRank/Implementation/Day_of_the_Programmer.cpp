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
	
	int year;
	cin>>year;
	bool leap;
	if(year < 1918){
		leap = year % 4 == 0 ? true : false;
	}
	else if(year > 1918){
		leap = ( year % 400 == 0 ) ||( year % 4 == 0 && year % 100 != 0 ) ? true : false;
	}
	// count = 0;
	if(year == 1918)
		cout<<"26.09.1918";
	else if(year > 1918 && leap == true)
		cout<<"12.09."<<year;
	else if(year > 1918 && leap == false)
		cout<<"13.09."<<year;
	else if(year < 1918 && leap == true)
		cout<<"12.09."<<year;
	else if(year < 1918 && leap == false)
		cout<<"13.09."<<year;
	return 0;
}


// In the Julian calendar, leap years are divisible by 4;
// in the Gregorian calendar, leap years are either of the following:

// Divisible by 400.
// Divisible by 4 and not divisible by 100.