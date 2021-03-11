#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Class
 * link          :   https://www.hackerrank.com/challenges/c-tutorial-class/problem
 */


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

class Student{
	private:
		int age,std;
		string first_name,last_name;
	public:
		void setFirstName(string first_name){
			this->first_name = first_name;
		}
		void setLastName(string last_name){
			this->last_name = last_name;
		}
		void setAge(int age){
			this->age = age;
		}
		void setStd(int std){
			this->std = std;
		}

		int getAge(){
			return age;
		}
		int getStd(){
			return std;
		}
		string getFirstName(){
			return first_name;
		}
		string getLastName(){
			return last_name;
		}

};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	int age,std;string first,last;cin>>age>>first>>last>>std;
	Student st;
	st.setAge(age);
	st.setStd(std);
	st.setFirstName(first);
	st.setLastName(last);

	cout<<st.getAge()<<endl<<st.getLastName()<<", "<<st.getFirstName()<<endl<<st.getStd()<<endl;
	cout<<endl;
	cout<<st.getAge()<<','<<st.getFirstName()<<','<<st.getLastName()<<','<<st.getStd()<<endl;
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
// 15
// john
// carmack
// 10