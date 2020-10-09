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
		char chess[8][8];
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				chess[i][j] = 'X';
			}
			// cout<<endl;
		}
		int k;
		cin>>k;
		k--;
		chess[0][0] = 'O';
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				if(i == 0 && j == 0)
					continue;
				if(k == 0)
					break;
				// if(j == 7)
				// 	continue;

				chess[i][j] = '.';
				k--;
			}
		}
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				cout<<chess[i][j];
			}
			cout<<endl;
		}
	cout<<endl;
	}
	return 0;
}