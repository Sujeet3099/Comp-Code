#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
    ll n,q;
    cin>>n>>q;
    vector<ll>height(n+1);
    vector<ll>taste(n+1);
    for (ll i = 1; i <= n; ++i)
        cin>>height[i];
    for (ll i = 1; i <= n; ++i)
        cin>>taste[i];
    ll tastiness = 0;
    ll query;
    while(q--)
    {
        cin>>query;
        ll b,c,k,sden,eden;
        if(query==1)
        {
            cin>>b>>k;
            taste[b]=k;
        }
        else
        {
            cin>>b>>c;
            if(b==c)
                tastiness=taste[b];
            else if(height[b]<=height[c])
                tastiness=-1;
            else if(b>c){
                eden=b;
                sden=c;
                tastiness=taste[sden]+taste[eden];
                for(ll i=sden;i<eden;++i){
                    if(height[sden]<height[i]){
                        tastiness+=taste[i];
                        sden=i;
                    }
                    if(height[i]>=height[eden]){
                        tastiness=-1;
                        break;
                    }
                }
            }
            else if(b<c){
                eden=b;
                sden=c;
                tastiness=taste[eden]+taste[sden];
                for(ll i=sden-1;i>eden;--i){
                    if(height[sden]<height[i]){
                        tastiness+=taste[i];
                        sden=i;
                    }
                    if(height[i]>=height[eden]){
                        tastiness=-1;
                        break;
                    }
                }
            }
            cout<<tastiness<<endl;
        }
    }
    return 0;
}