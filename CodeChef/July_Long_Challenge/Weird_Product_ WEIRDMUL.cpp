#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

ll mod_power(ll base,ll exponent,ll mod){

	if( mod == 1)
		return 0;
	else{
		ll res = 1;
		base = base % mod;
		while(exponent > 0){
			if(exponent % 2 == 1)
				res = (res * base) % mod;
			exponent = exponent >> 1;
			base = (base * base) % mod;
		}
		return res;
	}

}
mod_power()

// function modPow(b,e,m)
//   if m == 1 then
//     return 0
//   else
//     local r = 1
//     b = b % m
//     while e > 0 do
//       if e % 2 == 1 then
//         r = (r*b) % m
//       end
//       e = e >> 1     --use 'e = math.floor(e / 2)' on Lua 5.2 or older
//       b = (b^2) % m
//     end
//     return r
//   end
// end

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    // ll m = 998244353;
    ll m = 998244353;
    

    while(t--){

	    ll b = 0;
	    ll x,n,temp;
	    cin>>n>>x;
	    std::vector<ll> v;	    
	    for (ll i = 0; i < n; ++i)
	    {
	    	cin>>temp;
	    	v.pb(temp);
	    }
	    // cout<<x;
	    ll w,res = 1;
	    ll diff;
		for (ll i = 0; i < n; ++i)
	 	{
	 		for (ll j = i; j < n; ++j)
	 		{
	 			w = 0;
	 			for (ll l = i; l <= j; ++l)
	 			{	
	 				
	 				// ll res = 0;
	 				diff = (l-i);
	 				w += (v[l]*mod_power(x,diff,m)) % m;
	 				// cout<<v[i]<<endl;
	 			}
	 			w =  (w*w) % m ;
	 			// cout<<"("<<res<<")"<<"--"<<endl;
	 			res = (res * w)% m;
	 		}
	 		// res *= (res % m);
	 	}
	 	res = (res % m);	
	 	// ll z = 2 % 9; 
	 	// cout<<endl;	
		cout<<res<<endl;
		// cout<<(2^2);
	}
	
	return 0;
}