#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Insanely Hard School Exams Problem Code: ACCBIP
 * link          :   https://www.codechef.com/AUG20B/problems/ACCBIP
 */
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi(n) vector<int> v(n);
#define vll(n) vector<ll> v(n);
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
    return a.second > b.second;
}

int fact(int n);   
int nCr(int n, int r){ 
    return fact(n) / (fact(r) * fact(n - r)); 
}
// Returns factorial of n 
int fact(int n){
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}

ll printNcR(int n, int r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    return p;
}

ll solve(){
	int n,color,k;
	cin>>n>>color>>k;
	vector<int> a(n),b(n),c(n),v(color);
	map<int,int> m;  //,greater<int> 
	rep(i,0,n){
		cin>>a[i]>>b[i]>>c[i];
		m[c[i]]++;
	}
	rep(i,0,color) cin>>v[i];
	int erase = v[0];
	vector<pair<int,int> >vp;
	repA(i,m) vp.pb(i);
	sort(all(vp),compare);
	// repA(i,vp) cout<<i.first<<" "<<i.second<<endl;
	for(auto it = vp.begin();it!=vp.end();it++){
		if(vp.size()==1){
			if(k-erase<0)
				break;
			while(k-erase>=0){
				it->second--;
				k-=erase;
				if(k-erase<0)
					break;
			}
		}
		else{
			it++;
			auto temp = it;
			it--;
			if(k-erase<0)
				break;
			if(temp==vp.end()){
				while(k-erase>=0){
					it->second--;
					k-=erase;
					if(k-erase<0)
						break;
				}		
			}
			else{
				while(it->second>=temp->second && k-erase<0){
					it->second--;
					k-=erase;
					if(k-erase<0)
						break;
				}
			}
		}
	}
	// cout<<k<<' '<<erase<<endl;
	// repA(i,vp) cout<<i.first<<" "<<i.second<<endl;
	ll sum = 0;
	repA(i,vp){
		// sum+=nCr(i.second,3);
		sum+=printNcR(i.second,3);
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();

	ll test = 1;
	cin>>test;
	while(test--){
		cout<<solve()<<endl;
	}

	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}
/**
 * Test Cases:-
 */
