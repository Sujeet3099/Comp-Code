#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    vector<int> v;

    v.push_back(1);//Insert element 1.
    v.push_back(2);//Insert element 2.

    //Now the vector(v) has 2 elements in it, with size 2

    v.pop_back();//This method will remove the last element

    v.pop_front(); // This method will remove the first element

    //erase the 7th element
    v.erase(v.begin()+6);

    //erase first 3 elements
    v.erase(v.begin(),v.begin()+3);

     //Empty the vector
    v.clear();

    vector<int>::iterator new_end; // we can also use auto (auto new_end;)
    new_end = remove(v.begin(), v.end(), 20);

    vector<int>::iterator it; //we can also use auto (auto it;)
    it = remove_if(v.begin(), v.end(), isEven);
    //isEven() method checks each element whether it is even or not.
    
    remove_copy(v1.begin(), v1.end(), v2.begin(), 20); 
    //copies value of vector v1 into v2 except value 20 (multiple occurences also)



	return 0;
}