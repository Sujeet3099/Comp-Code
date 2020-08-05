#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int solve(vector<int>& A){
    unordered_set <int> ret;
    unordered_set <int> curr2;
    for(int i = 0; i < A.size(); i++){
        unordered_set <int> curr1;
        curr1.insert(A[i]);
        unordered_set<int>::iterator it = curr2.begin();
        while(it != curr2.end()){
            curr1.insert(*it | A[i]);
           	it++;
        }
        it = curr1.begin();
        while(it != curr1.end()){
            ret.insert(*it);
            it++;
        }
        curr2 = curr1;
    }
    return ret.size();
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

	ll test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<int> v(n);
		rep(i,0,n){
			cin>>v[i];
		}
	cout<<( (solve(v) == (n*(n+1)) / 2)?"YES" : "NO")<<endl;
	}
	return 0;

}
/**
 * test Case:
 */
// 4
// 3
// 1 2 7
// 2
// 1 2
// 3
// 6 5 8
// 5
// 12 32 45 23 47