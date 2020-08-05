#include"bits/stdc++.h"

using namespace std;

int max_of_four(int a,int b,int c,int d){
	int max = ( a > b ? a : b ) > c ? ( a > b ? a : b ) : c;
	int result = max > d ? max : d;

	return result;
}

int main(){
	int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}