#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Chef Jump Problem Code: CHEFJUMP
 * link          :   https://www.codechef.com/PAHC2020/problems/CHEFJUMP
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

int calcAngle(double h, double m) 
{ 
    if (h <0 || m < 0 || h >12 || m > 60) 
        return 0; 
 
    if (h == 12) h = 0; 
    if (m == 60){
	  m = 0;
	  h += 1;
	  if(h>12)
	    h = h-12;
    } 
 	float hour_angle = 0.5 * (h * 60 + m); 
    float minute_angle = 6 * m; 
    float angle = abs(hour_angle - minute_angle); 
    angle = min(360 - angle, angle); 
 
    return angle; 
} 

void solve(){
	string s;cin>>s;
	double hr = stof(s.substr(0,2));
	double h = (hr>=12?hr-12:hr);

	int mn = stof(s.substr(3,2));
	double m,fi=mn,se=mn;// = (mn % 5 == 0)?mn:mn*ceil(mn/5.0);
	if(mn % 5 == 0)
		fi = mn;
	else{
		fi = mn*(ceil(mn/5.0));
		se = mn*(floor(mn/5.0));
	}

	m = min(abs((h*5)-fi),abs((h*5)-se))==fi?fi:se;

	cout<<calcAngle(h,m)<<" degree"<<endl;
	// return calcAngle(h,m);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--)	solve();

	clock_t end=clock();
	cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
