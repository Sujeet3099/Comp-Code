#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
    std::vector<int> num;
    int a[100] = {0},b[100] = {0};
    int n,m;
    cin>>n>>m;
    
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin>>b[i];
    }
    // sort(a,a+n);
    // for(int i = 0; i < n; i++){
    //     cout<<a[i]<<" ";
    // }
    int g =b[0];
    for(int i = 0; i < m; ++i){
        g = __gcd(g,b[i]);
    }
    int l = a[0];
    for (int i = 0; i < n; ++i)
    {

        // l = ( l * a[i] ) / ( __gcd(l,a[i]) );
        int temp =  __gcd(l,a[i]);
        l =  ( l * a[i] ) / ( temp );
    }
    int count = 0;
    // int num;
    cout<<g<<" "<<l<<endl;
    for(int i = 1; i <= 100; ++i){
        if( ( g ) % ( l * i ) == 0){
            // g = (g) / (l*i);
            count++;
        }
    }
    cout<<count;
    return 0;
}