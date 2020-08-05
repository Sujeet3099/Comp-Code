#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// int t;
	// cin>>t;
	// while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for (int i = 0; i < n; ++i)
	    {
	    	cin>>v[i];
	    }
	    int d,m,sum=0;
	    int p = 0;
	    int count = 0;
	    cin>>d>>m;
	    for (int i = 0; i < n; ++i)
	    {
	    	for(int j = i; j < i+m ; ++j){
	    		sum += v[j];
	    		count++;
	    		if(sum == d && count == m){
	    			p++;
	    			sum = 0;
	    			count = 0;
	    		}
	    	}
	    	sum = 0;
	    	count = 0;
	    }
	    cout<<p<<endl;
	// }
	return 0;
}
/**
 *	int sum[105];
    int count=0;
    sum[0]=0;
    for(int i=0;i<n;i++)sum[i+1]=sum[i]+squares[i];
    for(int i=0;i<=n-m;i++){
        if(sum[i+m]-sum[i]==d){
            count++;
        }
    }
 */

/**
 * // Modify array to make each 'i' contain the running sum of prior elements
        for (int i = 1; i < n; i++) {
            sum[i] += sum[i - 1];
        }
        
        // Set number of ways counter
        // If there are >= 'm' squares AND the first possible piece has sum = 'd', 1
        // Else, 0
        int numberOfWays = (m <= n && sum[m - 1] == d) ? 1 : 0;
        
        // Check the sums for pieces ending at index 'm' through 'n - 1'
        for (int i = m; i < n; i++) {
            // If the sum of the piece is equal to 'd'
            if (sum[i] - sum[i - m] == d) {
                // Increment ways counter
                numberOfWays++;
            }
        }
 */