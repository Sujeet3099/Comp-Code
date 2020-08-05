#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
    std::map<int, pair<int,int> > map;
    int temp;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i){
        cin>>temp;
        map[temp].first += 1;
    }
    for(int i = 0; i < n; ++i){
        cin>>temp;
        map[temp].second += 1;
    }
    auto it = map.begin();
    while(it != map.end() ){
        cout<<(it->second).first<<"\t"<<(it->second).second<<endl;
        it++;
    }
       
    return 0;
}