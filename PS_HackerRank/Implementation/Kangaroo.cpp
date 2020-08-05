#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    // bool result = false;
    // while(x1 != x2){
    // 	int i;
    //     x1 += v1;
    // 	x2 += v2;
    // 	if(x1 == x2){
    // 		result = true;
    //         break;
    // 	}
    // 	else if (i>=10000000000){
    // 		result = false;
    //         break;

    //     }

    //     i++;
    // }
    // cout<<(result == true ? "Yes" : "No"); 
    // // but this solution is very time inefficient
    
    /**
     * so lets shorten the code
     */
    
    //We know that the position of the first kangaroo is equal to x1 + v1 * n,
    // where n is the number of jumps it has made. 
    // Similarly, the position of the second kangaroo is equal to x2 + v2 * n. 
    // If we set these expressions equal to one another, 
    // we can not only determine whether they will intersect,
    // but when and at what location. So let’s do some algebra:

    // x1 + v1 * n = x2 + v2 * n (Set the expressions equal to each other.)
    // (v1 * n) - (v2 * n) = x2 - x1 (Move the n terms to the same side.)
    // n * (v1 - v2) = x2 - x1 (Factor out the n terms.)
    // n = (x2 - x1) / (v1 - v2) (Divide each side by v1 - v2.)
    // As long as n is a positive integer, then we know right off the bat that the kangaroos 
    // will land in the same spot at some point. n is positive as long as v1 < v2. 
    // That’s what the first logical condition in the if-statement above is checking. 
    // If v1 < v2, then we can return ‘NO’.

    // The second logical condition is checking that n evaluates to an integer. 
    // After all, it doesn’t make much sense to talk about the kangaroos being 
    // in the same spot after 1.37 jumps, right? 
    // It only works if they intersect at a whole number value of n. 
    // So if (x2 - x2) divides into (v1 - v2) with a remainder other than zero,
    //  then we should return ‘NO’.

    // Otherwise, n evaluates to a positive integer, so the answer is ‘YES’. 
    // The kangaroos will intersect.
    if (v1 < v2 || (x2 - x1) % (v1 - v2) != 0) {
        cout<<"NO";
    } else {
        cout<<"YES";
    }
   
	return 0;
}