#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007

void merge_sort(vi &array,int start,int last){

	// breaking the array in pieces

	if(start == last)	return;

	int mid = (start+last)/2;
	merge_sort(array,start,mid);
	merge_sort(array,mid+1,last);

	// will join the array after comparing
	vi temp1(mid-start+1),temp2(last-mid);
	rep(i,0,(mid-start+1))	temp1[i] = array[start+i];
	rep(i,0,(last-mid))	temp2[i] = array[mid+1+i];
	int i = 0,j = 0, k = start;
	while(i < mid-start+1 && j < last-mid){
		if(temp1[i]>temp2[j]){
			array[k] = temp2[j];
			j++;
		}
		else{
			array[k] = temp1[i];
			i++;
		}
		k++;
	}
	// rest of the values left which were not compared or may have been left out
	// copying them blindly now;

	while(i<mid-start+1){
		array[k] = temp1[i];
		i++;
		k++;
	}

	while(j<last-mid){
		array[k] = temp2[j];
		j++;
		k++;
	}

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    int n;cin>>n;
    vi v(n);
    srand(time(0));
    rep(i,0,n)	v[i] = (rand()%(100-1)+1);
    merge_sort(v,0,n-1);
    repA(i,v)	cout<<i<<' ';




    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
