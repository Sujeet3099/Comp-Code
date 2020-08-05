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

        int aka=0,bka=0;
        int res = 0;
    	
        std::map<int, tuple<int,int,int> > map;
        int temp;
        int n;
        cin>>n;

        // get<0>(foo_data_by_username[some_user]) = "new string";
        for(int i = 0; i < n; ++i){
            cin>>temp;
            // map[temp].first += 1;
            get<0>(map[temp]) += 1;
        }
        for(int i = 0; i < n; ++i){
            cin>>temp;
            // map[temp].second += 1;
            get<1>(map[temp]) += 1;
        }

        // auto it = map.begin();
        // for(auto it = map.begin(); it != map.end();++it){
        //     // int i = *it
        //     // cout<<get<0>(map.at(i))<<"\t"<<get<1>(map.at(i))<<"\t"<<get<2>(map.at(i))<<endl;
        //     cout<<get<0>(map.at(it->first))<<"\t"<<get<1>(map.at(it->first))
        //     <<"\t"<<get<2>(map.at(it->first))<<endl;
        // }

        int count = 0;
    	// auto itr = map.begin();
    	for(auto itr=map.begin(); itr != map.end(); ++itr){

            aka =get<0>(map.at(itr->first));
    		bka = get<1>(map.at(itr->first));
    		
            int det = (aka + bka);
    		if(aka == bka )
    			continue;

    		else if(det % 2 != 0){
    			res = -1;
    			break;
    		}
    		
    		else if( det % 2 == 0 ){
    			
                (det / 2) == 1 
                ? get<2>(map.at(itr->first)) += ( det / 2 ) 
                : get<2>(map.at(itr->first)) += ( det / 2 ) - 1 ;
                (det / 2) == 1 
                ? count += (det / 2)
                : count += (det / 2) - 1;
                
                // count++;
    		}
    	}
        cout<<"<============================>"<<endl;
        for(auto it = map.begin(); it != map.end();++it){
            cout<<it->first<<"\t"<<get<0>(map.at(it->first))<<"\t"<<get<1>(map.at(it->first))
            <<"\t"<<get<2>(map.at(it->first))<<endl;
        }
        
        // cout<<count<<"-------"<<endl;
        
        int counter = (count / 2);
        // cout<<counter<<"--==---"<<endl;
        std::vector<int> v;
        
        for(auto i = map.begin(); i != map.end(); ++i){
            if( counter > 0 ){
                if(get<2>(map.at(i->first)) > 0 && counter > 0){
                    // if(v.size() != 0){
                    //     mins = v[0];
                    //     res += min(i->first,mins);
                    //     get<2>(map.at(i->first))--;
                    //     counter--;

                    //     v.erase(v.begin());
                    // }
                        res += i->first;
                        counter--;
                        v.pb(i->first);
                        get<2>(map.at(i->first))--;
                        // cout<<get<2>(map.at(i->first))<<" => "<<(i->first)<<endl;
                }
            }
            else
                break;
        }
    	cout<<res<<endl;

    }

	return 0;
}