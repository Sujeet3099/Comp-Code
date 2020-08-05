#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int noOfapple = 0,noOforange = 0;
    int s,t,a,b,m,n,apple[1000000],orange[1000000];
    cin>>s>>t;
    cin.ignore();
    cin>>a>>b;
    cin.ignore();
    cin>>m;
    cin>>n;
    for (int i = 0; i < m; ++i)
    {
    	/* code */
    	cin>>apple[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>orange[i];
    }
    for (int i = 0; i < m; ++i)
    {
    	/* code */
    	if(apple[i] >= (s-a) && apple[i] <= (t-a) )
    		noOfapple++;
    }
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	if(orange[i] <= (t-b) && orange[i] >= (s-b) )
    		noOforange++;
    }

    cout<<noOfapple<<endl<<noOforange;
	return 0;
}