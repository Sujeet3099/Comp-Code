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
	
    int n,k;
	cin>>n>>k;
	vector<int> v(n);
	int count = 0;
	rep(i,0,n){
		cin>>v[i];
	}
	rep(i,0,n){
		rep(j,0,n){
			if(i < j && (v[i] + v[j]) % k == 0)
				count++;
		}
	}
	cout<<count;

	return 0;
}
/**
 * int a[n];
   int m[k];
   for(int i=0; i<k; i++)
       m[i]=0;
    for(int i = 0; i < n; i++){
       cin >> a[i];
        m[a[i]%k]++;
    }
    int sum=0;
    sum+=(m[0]*(m[0]-1))/2;
     for(int i=1; i<=k/2 && i!=k-i; i++){
         sum+=m[i]*m[k-i];
     }
    if(k%2==0)
        sum+=(m[k/2]*(m[k/2]-1))/2;
    cout<<sum;
 */
/**
 * The idea is that you separate elements into buckets depending on their mod k. For example, you have the elements: 1 3 2 6 4 5 9 and k = 3

mod 3 == 0 : 3 6 9
mod 3 == 1 : 1 4
mod 3 == 2 : 2 5
Now, you can make pairs like so: Elements with mod 3 == 0 will match with elements with (3 - 0) mod k = 0, so other elements in the mod 3 == 0 list, like so:

(3, 6) (3, 9) (6, 9)
There will be n * (n - 1) / 2 such pairs, where n is length of the list, because the list is the same and i != j. Elements with mod 3 == 1 will match with elements with (3 - 1) mod k = 2, so elements in the mod 3 == 2 list, like so:

(1, 2) (1, 5) (4, 2) (4, 5)
There will be n * k such elements, where n is the length of the first list, and k of the second.

Because you don't need to print the actual pairs, you need to store only the number of elements in each list.
 */