#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c) : Sujeet Kumar
 */


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
	
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	deque <int> s1;
	deque <int> s2;
	deque <int> s3;
	
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int temp;

	rep(i,0,n1){
		cin>>temp;
		s1.pb(temp);
		sum1 += temp;
	}
	rep(i,0,n2){
		cin>>temp;
		s2.pb(temp);
		sum2 += temp;
	}
	rep(i,0,n3){
		cin>>temp;
		s3.pb(temp);
		sum3 += temp;
	}
	int mx = max(n1,n2);
	mx = max(mx,n3);
	int sum = min(sum1,sum2);
	sum = min(sum,sum3);
	rep(i,0,mx){

		if( sum1 == sum2 && sum2 == sum3)
			break;
		else{
			while(sum1 > sum2 || sum1 > sum3 ){
				sum1 -= s1.front();
				s1.pop_front();
			}
			while(sum2 > sum1 || sum2 > sum3 ){
				sum2 -= s2.front();
				s2.pop_front();
			}
			while(sum3 > sum1 || sum3 > sum2 ){
				sum3 -= s3.front();
				s3.pop_front();
			}
		}
	}
	cout<<sum1<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 5 3 4
// 3 2 1 1 1
// 4 3 2
// 1 1 4 1