//set<int>s; //Creates a set of integers.
//int length=s.size(); //Gives the size of the set.
//s.insert(x); //Inserts an integer x into the set s.
//s.erase(val); //Erases an integer val from the set s.
//set<int>::iterator itr=s.find(val);
// //Gives the iterator to the element val if it is found otherwise returns s.end() .
// Ex: set<int>::iterator itr=s.find(100);
//If 100 is not present then it==s.end().

#include"bits/stdc++.h"

using namespace std;
int main(){
	set<int> s;
	int q;
	cin>>q;
	cin.ignore();
	while(q--){
		int x,y;
		cin>>y>>x;
		if( y == 1 )
			s.insert(x);
		else if( y == 2 )
			s.erase(x);
		else if ( y == 3 ){
			set<int>:: iterator itr = s.find(x);
			cout<<(itr != s.end() ? "Yes" : "No")<<endl;
		}
	}
	return 0;
}