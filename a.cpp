#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));
// ll power(ll x,ll y,ll p){ll res=1; x=x%p;if(x==0) return 0;while(y>0)
// {if(y&1) res=(res*x)%p;y=y>>1; x=(x*x)%p;}return res;}

#define M 1000000007

ll power( ll x,  ll y, ll m){ 
    if (y == 0)     return 1; 
    ll p = power(x, y / 2, m) % m; 
    p = (p * p) % m; 
    return (y % 2 == 0) ? p : (x * p) % m; 
} 

void solve(){
    string s;
    cin>>s;
    int q;
    cin>>q;
    int n=s.length();
    ll fact[n+1],mmi[n+1];
    fact[0]=1;
    mmi[0]=1;
    for(int i=1;i<=n;i++){ 
        fact[i]=(fact[i-1]*i)%M;
        mmi[i]=power(fact[i],M-2,M);
    }
    int cnt[n+1][26];
    memset(cnt, 0, sizeof(cnt));
    for(int i=1;i<=n;i++)    cnt[i][s[i-1]-'a']++;
    for(int i=2;i<=n;i++){
       for(int j=0;j<26;j++)    cnt[i][j]+=cnt[i-1][j];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        int even=0,odd=0;
        ll den=1,num=0;
        for(int it=0;it<26;it++){
            int value=cnt[r][it]-cnt[l-1][it];
            if(value%2!=0)
            odd++;
            even+=value/2;
            den=(den*mmi[value/2])%M;
        } 
        num=fact[even];
        ll ans=(num*den)%M;
        if(odd!=0){
           ans=(ans*odd)%M;
        }
        cout<<ans<<endl;
    }
    return;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start=clock();

    ll test = 1;
    // cin>>test;
    while(test--)    solve();

    clock_t end=clock();
    cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 * Test Cases:-
 */
