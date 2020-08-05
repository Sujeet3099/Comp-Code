#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

const int maxn = 2e5 + 42, mod = 1e9 + 7;
 
int bpow(int x, int n) {
	return n ? n % 2 ? 1LL * x * bpow(x, n - 1) % mod : bpow(1LL * x * x % mod, n / 2) : 1;
}
int inv(int x) {
	return bpow(x, mod - 2);
}
 
int F[maxn];
int fact(int n) {
	return n ? F[n] ? F[n] : F[n] = 1LL * n * fact(n - 1) % mod : 1;
}
int rfact(int n) {
	return inv(fact(n));
}
int nCr(int n, int r) {
	return 1LL * fact(n) * rfact(r) % mod * rfact(n - r) % mod;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
		int N;
		cin >> N;
		string A, B;
		cin >> A >> B;
		int Na = count(begin(A), end(A), '1');
		int Nb = count(begin(B), end(B), '1');
		int ans = 0;
		int L = abs(Na - Nb);
		int R = Na + Nb - 2 * max(0, Na + Nb - N);
		for(int k = L; k <= R; k += 2) {
			ans = (ans + nCr(N, k)) % mod;
		}
		cout << ans << endl;
	}
	
	return 0;
}