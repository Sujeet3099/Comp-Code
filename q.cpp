#include"bits/stdc++.h"
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    string s,st;
    cin >> s;
    int l = s.size();
    map<string, int> m;
    for (auto i = 0; i < l + 1; i++)
    {
    	st = s.substr(i);
    	m[st] = i;
        
    }
    for (auto &i : m)
        cout << i.second << " ";
    cout << endl;
    return 0;
}