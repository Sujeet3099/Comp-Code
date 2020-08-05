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
	ll test;
	cin>>test;
	map<string, int> map;

	while(test--){
	int q,y;
	string s;
	cin>>q>>s;
	if(q == 1){
		cin>>y;
		map[s]+=y;
	}
	else if( q == 2){
		map.erase(s);
	}
	else if( q == 3){
		// auto it = map.find(s);
		cout<<map[s]<<endl;
	}


	}

	return 0;
}


//map temoplate => std::map <key_type, data_type>
//map<string,int>m; 
//Creates a map m where key_type is of type string and data_type is of type int.
//int length=m.size(); //Gives the size of the map.
//m.insert(make_pair("hello",9));
//Here the pair is inserted into the map 
//where the key is "hello" and the value associated with it is 9.
//m.erase(val); //Erases the pair from the map where the key_type is val.
//map<string,int>::iterator itr=m.find(val); 
//Gives the iterator to the element val if it is found otherwise returns m.end() .
//Ex: map<string,int>::iterator itr=m.find("Maps");
//If Maps is not present as the key value then itr==m.end().
//To get the value stored of the key "MAPS" we can do m["MAPS"] 
//or we can get the iterator using the find function and
// then by itr->second we can access the value.
