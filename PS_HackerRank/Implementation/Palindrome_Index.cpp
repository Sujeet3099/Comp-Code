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
	
	int q;
	cin>>q;
	while(q--){
		// clock_t start=clock();
		string s;
		cin>>s;
		vector<int> v;
		int res = -1;

		// int count = 0;
		int n = s.size();

		for(int i = 0, j = n-1; i < n/2 ; i++,j--){
			if(s[i] == s[j])
				continue;
			else if(s[i] != s[j]){
				res = 0;

				if(s[i+1] == s[j] && s[i+2] == s[j-1]){
					// v.pb(i);
					s.erase(s.begin()+(i));
					string temp = s;
					reverse(temp.begin(),temp.end());
					if(s == temp){
						cout<<i<<endl;
						break;
					}
					else{
						cout<<"-1"<<endl;
						break;
					}
				}
				else if( s[i] == s[j-1] && s[i+1] == s[j-2]){
					res = 0;
					// v.pb(j);
					s.erase(s.begin()+(j));
					string temp = s;
					reverse(temp.begin(),temp.end());
					if(s == temp ){
						cout<<j<<endl;
						break;
					}
					else{
						cout<<"-1"<<endl;
						break;
					}
				}
				else
					cout<<"-1";
			}
		}
		if(res == -1)
			cout<<"-1"<<endl;
		// if(v.size() == 1){
		// 	cout<<v[0]<<endl;
		// }
		// else
		// 	cout<<"-1"<<endl;
		// // cout<<(v.size() == 1  ? v[0] : "-1" )<<endl;
		

	}

	return 0;
}

/**
 * test Cases:-
 */
// 4
// aaab
// baa
// aaa
// hgygsvlfcwnswtuhmyaljkqlqjjqlqkjlaymhutwsnwcwflvsgygh