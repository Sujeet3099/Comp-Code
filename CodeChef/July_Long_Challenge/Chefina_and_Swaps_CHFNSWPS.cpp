#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        ll n,temp;
        cin>>n;
        map< ll,tuple<ll,ll,ll> > map;
        for(ll i=0;i<n;++i)
        {
            cin>>temp;
            get<0>(map[temp])+=1;
        }
        for(ll i=0;i<n;++i)
        {
            cin>>temp;
            get<1>(map[temp])+=1;
        }
        ll res=0,count=0;
        for(auto itr=map.begin();itr!=map.end();++itr)
        {
            ll det=abs(get<0>(map.at(itr->first))-get<1>(map.at(itr->first)));
            if(det==0)
                continue;
            else if(det%2!=0)
            {
                res=-1;
                break;
            }
            else if(det%2==0)
            {
                count+=det/2;
                get<2>(map.at(itr->first))=det/2;
            }
        }
        /*
        cout<<"<============================>"<<endl;
        for(auto it = map.begin(); it != map.end();++it){
            cout<<it->first<<"\t"<<get<0>(map.at(it->first))<<"\t"<<get<1>(map.at(it->first))
            <<"\t"<<get<2>(map.at(it->first))<<endl;
        }
        */
        count/=2;
        ll present;
        if(res != -1){
            for(auto i=map.begin();i!=map.end() && count>0;++i)
            {
                present=get<2>(map.at(i->first));
                if(count>=present)
                {
                    res+=min(2*map.begin()->first,i->first)*present;
                    count-=present;
                }
                else 
                {
                    res+=min(2*map.begin()->first,i->first)*count;
                    count=0;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}