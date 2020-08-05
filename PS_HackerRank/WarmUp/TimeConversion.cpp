#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    string s;
    getline(cin,s);
    string hh = s.substr(0,2);
    // cout<<hh;
    
    string det = s.substr(8,9);
    // cout<<det;
    int hhInt;
    string hhStr;
    if(det == "PM"){
    	if(hh == "12"){
    		// hhStr = to_string(hhInt);
    		// s.replace(0,2,hhStr);
    		
    	}
    	else{
	    	hhInt = stoi(hh);
	    	hhInt += 12;
	    	hhStr = to_string(hhInt);
	    	s.replace(0,2,hhStr);
	   	}
    }
    else if (det == "AM" && hh == "12"){

    	hh = "00";
    	s.replace(0,2,hh);
    }
    // cout<<hhInt;
    
    
    s.erase(8,2);
    cout<<s;
    // s.replace


	return 0;
}