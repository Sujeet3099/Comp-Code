#include<bits/stdc++.h>
using namespace std;

#define FASTIO1 ios_base::sync_with_stdio(false)
#define FASTIO2 cin.tie(NULL),cout.tie(NULL)
#define count_1(p) __builtin_popcountll(p)
#define count_0(p) __builtin_ctzll(p)
#define all(x) (x).begin(),(x).end()
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const ll inf=999999999;
const ll mod=1e9+7;
bool tc=true;
void signChange(deque<ll>&d,ll k,int count)
{
	ll temp1,temp2;
	if(count<=k){
		if((count-k)%2==0){
			temp1=d.front();
			temp2=d.back();
			d.pop_front();
			d.pop_back();
			temp2*=-1;
			temp1*=-1;
			d.push_back(temp2);
			d.push_front(temp1);
		}
		else{
			// temp1=d.front()>d.back()?d.front():d.back();
			if(d.front()>=d.back()){
				temp1=d.front();
				temp1*=-1;
				d.pop_front();
				d.push_front(temp1);
			}
			else{
				temp1=d.back();
				temp1*=-1;
				d.pop_back();
				d.push_back(temp1);
			}
		}
	}
}
void solve()
{
	ll n,k;
	cin>>n>>k;
	deque<ll> d(n);
	ll ans = 0,val = 0,count=0;
	for(ll i=0;i<n;i++){
		cin>>d[i];
	}
	ll temp1,temp2;
	for(ll i=0;i<n;i++){
		temp1=d.front();
		temp2=d.back();
		if(abs(temp1)>=abs(temp2)){
			d.pop_front();
			if(count%2==0){
				ans+=temp1;
			}
			else
				ans-=temp1;
			count++;
			signChange(d,k,count);
		}
		else{
			d.pop_back();
			ans+=temp2;
			if(count%2==0){
				ans+=temp1;
			}
			else{
				ans-=temp1;
				count++;
				signChange(d,k,count);
			}
		}
	}
	cout<<ans<<endl;
}

int main() 
{
    FASTIO1;
    FASTIO2;
    clock_t start=clock();
    ll t=1; 
    if(tc) cin>>t;
    while(t--)
        solve();
    cerr<<fixed<<setprecision(6);
    cerr<<(double)(clock()-start)/CLOCKS_PER_SEC<<endl;
    return 0;
}