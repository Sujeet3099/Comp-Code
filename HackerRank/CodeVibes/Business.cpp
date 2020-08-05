#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

vector<int> primeFactors[10001]; 
set<int> s;

void findPrimeFactors() 
{ 
    bool primes[10001]; 
    memset(primes, true, sizeof(primes));
    for (int i = 2; i < 10001; i++) { 

        if (primes[i]) { 
            for (int j = i; j < 10001; j += i) { 

                if (j != i) { 
                    primes[j] = false; 
                } 
                primeFactors[j].push_back(i); 
            } 
        } 
    } 
} 
void primeFactorsofLCM(int* frequecyOfPrimes,int* arr, int n) 
{ 
    for (int i = 0; i < n; i++) { 
        for (auto a : primeFactors[arr[i]]) 
        { 
            int k = 0;
            while ((arr[i] % a) == 0) 
            { 
                arr[i] /= a; 
                k++; 
            } 
            frequecyOfPrimes[a] 
                = max(frequecyOfPrimes[a], k); 
        } 
    } 
}
int elementToBeAdded(int* frequecyOfPrimes, int m) 
{ 
    int product = 1,ans=1;
    for (int i = 2; i <= m; i++) 
    { 
        if (s.find(i) != s.end()) 
            continue; 
        int j = i; 
        int current = 1; 
        for (auto a : primeFactors[j]) 
        {
            int k = 0;
            while ((j % a) == 0) 
            { 
                j /= a; 
                k++; 
                if(k>frequecyOfPrimes[a])
                    current *= a;
            } 
        }
        if (current > product) 
        { 
            product=current; 
            ans=i; 
        } 
    } 
    return ans; 
} 

void findElement(int arr[],int n,int m) 
{
    for(int i=0;i<n;i++) 
        s.insert(arr[i]); 
    int frequencyOfPrimes[10001]={0}; 
    primeFactorsofLCM(frequencyOfPrimes,arr,n); 
    cout<<elementToBeAdded(frequencyOfPrimes,m)<<endl; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    findPrimeFactors();
    ll test;
    cin>>test;
    while(test--){

        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        findElement(arr,n,m);
        
    }
    
    return 0;
}
