#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Write a program that takes three variable (a, b, c) as separate parameters and rotates the
					values stored so that value a goes to be, b, b to c and c to a by using SWAP(x,y)
					function that swaps/exchanges the numbers x & y.
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	swap(&a,&b);
	swap(&a,&c);
	cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
//input
//1 2 3
//output
//a = 3 b = 1 c = 2

