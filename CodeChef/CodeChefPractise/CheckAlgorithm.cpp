#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		std::vector<char> v;
		for (int i = 0; i <s.length(); ++i)
		{
			if(s[i] == s[i-1] && i != 0)
				i++;
			char c = '0'+(count(s.begin(), s.end(), s[i]));		
			v.pb(s[i]);
			v.pb(c);
		}

		for(auto i:v){
			v[i];
		}

		/**
		 * for(ll i=0;i<len;)
		{
			comp+=s[i];
			ll j=0;
			while(s[i]==s[i+j])
				j++;
			ostringstream ss;
			ss<<j;
			comp+=ss.str();
			i+=j;
		}
		if(len>comp.length())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		 */
	}
	return 0;
}