#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

bool compare(const pair<char, int>&a, const pair<char, int>&b)
{
   return a.second > b.second;
}

int count_alternating(const string &s, char c, char d) {
    int n = 0;
    bool last_c = false;
    bool last_d = false;
    for (char a : s) {
        if (a == c) {
            if (last_c) return 0;
            n++;
            last_c = true;
            last_d = false;
        }
        if (a == d) {
            if (last_d) return 0;
            n++;
            last_c = false;
            last_d = true;
        }
    }
    return n;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// ll test;
	// cin>>test;
	// while(test--){
		int n;
		cin>>n;
		string s;
		cin>>s;

		set<char> set;
		
	    for(char a : s){
	        set.insert(a);
	    }

	    int m = 0;
	    if(s.length() > 1){
	        for( auto a : set){
	            for(auto b : set){
	                if(a == b) continue;
	                int n = count_alternating(s,a,b);
	                if(n > m) m = n;
	            }
	        }
	    }

        cout<<m<<endl;
	// }
	return 0;
}