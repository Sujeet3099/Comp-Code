#include"bits/stdc++.h"
#include<array>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	ll test;
	cin>>test;
	while(test--){
	int s[3][3];

	rep(i,0,3){
		rep(j,0,3)
			cin>>s[i][j];
	}

    int m[] = {4,9,2,7,6,1,8,3};

    int[] s1 = new int[8];
    s1[0] = s[0][0];
    s1[1] = s[0][1];
    s1[2] = s[0][2];
    s1[3] = s[1][2];
    s1[4] = s[2][2];
    s1[5] = s[2][1];
    s1[6] = s[2][0];
    s1[7] = s[1][0];

    int min = 45;  // worst case when all zeros
    for (int i=0; i<8; i++){    // select one matrix
        int res = 0;

        if (i < 4){
            int j = Math.floorMod(i*2, 8);
            for (int t = 0; t<8; t++){  // foreach element in the matrix
                res += Math.abs(s1[t] - m[Math.floorMod(j+t,8)]);
            }
        } else {
            // change orientation
            int j = Math.floorMod(-i*2, 8);
            for (int t = 0; t<8; t++){  // foreach element in the matrix
                res += Math.abs(s1[t] - m[Math.floorMod(j-t,8)]);
            }
        }

        // Calculate middle cost (5 is always present in center m(1,1) in all magic squares 3x3)
        res += Math.abs(s[1][1] - 5);

        if (res < min){
            min = res;
        }
    }

    cout<<min;


	}
	
	return 0;
}