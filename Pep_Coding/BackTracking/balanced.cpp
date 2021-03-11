#include "bits/stdc++.h"
using namespace std;

void build(int op, int cl, string s, int n) {
    if (cl == n) {
        cout << s << endl;
        return;
    }
    if (op > cl) build(op, cl + 1, s + ")", n);
    if (op < n) build(op + 1, cl, s + "(", n);
}
// void build(int op,int cl,int n,int pos){
//     static char s[100];
//     if(cl == n){
//         cout<<s<<endl;
//         return;
//     }
//     if(op > cl)    s[pos] = ')',build(op,cl+1,n,pos+1);
//     if(op < n)    s[pos] = '(',build(op+1,cl,n,pos+1);
// }

int main() {
    int n;
    cin >> n;
    build(0, 0, "", n);
    // cout<<"-------------"<<endl;
    // build(0,0,n,0);
    return 0;
}
