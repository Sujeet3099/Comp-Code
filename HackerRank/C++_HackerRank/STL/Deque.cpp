#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		deque<int> v(n);
		// pair<int,int> max;
		int max = 0;
		int maxIndex = 0;
		int count = 0;
		rep(i,0,n){
			cin>>v[i];
			if(v[i] >= max){
				max = v[i];
				maxIndex = i;
				count++;
			}
			else
				count++;
			if(count == k){
				cout<<max<<" ";
				count--;
				if(v.front() == max){
					// max.first = v[(max.second)+1];
					// max.second = (max.second)+1;
					v.pop_front();
					max = *max_element(v.begin(),v+k);
				}
				
			}

		}
		cout<<endl;
	}
	return 0;
}

//  while(t--)
// {
//     ll n,k;
//     scanf("%lld%lld",&n,&k);
//     ll a[n];
//     for(ll i=0;i<n;i++)
//         scanf("%lld",&a[i]);
//     ll mx=-1;
//     for(ll i=0;i<k;i++)
//         mx=max(mx,a[i]);
//     printf("%lld ",mx);
//     for(ll i=k;i<n;i++)
//     {
//         if(mx<=a[i])
//             mx=a[i];
//         else if(mx>a[i] && mx==a[i-k])
//             mx=*max_element(a+i-k+1,a+i+1);
//         printf("%lld ",mx);
//     }
//     printf("\n");
// }

// Deque Template:
// std::deque<value_type>
// Declaration:
// deque<int> mydeque; //Creates a double ended queue of deque of int type
// Size
// int length = mydeque.size(); //Gives the size of the deque
// Push
// mydeque.push_back(1); //Pushes element at the end
// mydeque.push_front(2); //Pushes element at the beginning
// Pop
// mydeque.pop_back(); //Pops element from the end
// mydeque.pop_front(); //Pops element from the beginning
// Empty
// mydeque.empty() //Returns a boolean value which tells whether the deque is empty or not