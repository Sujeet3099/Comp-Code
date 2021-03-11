#include "bits/stdc++.h"
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
#define all(x) (x).begin(), (x).end()
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define repA(i, v) for (auto i : v)
#define per(i, a, n) for (ll i = n - 1; i >= a; i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n, m) vector<vector<int> > v(n, vector<int>(m));
ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

// int myAtoi(string s) {
//     bool neg = false,pos = false,dig = false;
//     int resNum = 0;
//     for(int i = 0; i < s.size(); i++){
//         if(s[i]=='-' && neg == false && pos == false && dig == false){
//             neg = true;
//         }else if(s[i]=='+' && pos == false && neg == false && dig == false){
//             pos = true;
//         }else if(s[i] == ' '&& dig == false){
//             continue;
//         }else if(isdigit(s[i])){
//             dig = true;
//             int rem = s[i]-'0';
//             if (resNum > INT_MAX/10 || (resNum == INT_MAX / 10 && rem > 7)) return neg?INT_MIN:INT_MAX;
//             if (resNum < INT_MIN/10 || (resNum == INT_MIN / 10 && rem < -8)) return neg?INT_MIN:INT_MAX;
//             resNum = resNum*10 + rem;
//         }else{
//             if(dig) return (neg?-resNum:resNum);
//             else    return 0;
//         }
//     }

//     return (neg?-resNum:resNum);
// }

// if (revNum > INT_MAX/10 || (revNum == INT_MAX / 10 && rem > 7)) return;
// if (revNum < INT_MIN/10 || (revNum == INT_MIN / 10 && rem < -8)) return;

void solve() {
    string num1, num2;
    cin >> num1 >> num2;
    vector<string> v;

    int carry = 0;

    for (int i = num1.size() - 1; i >= 0; i--) {
        string s = "";
        for (int j = num2.size() - 1; j >= 0; j--) {
            string temp = to_string(((int)num1[i] - '0') * ((int)num2[j] - '0') + carry);
            char adder, charCarry;
            // cout<<num1[i]<<' '<<num2[j]<<"=="<<temp<<"  "<<adder<<"->"<<carry<<endl;
            if (temp.size() == 2) {
                if (j == 0) {
                    reverse(all(temp));
                    carry = 0;
                    s += temp;
                    continue;
                } else
                    adder = temp[temp.size() - 1], charCarry = temp[temp.size() - 2];
            } else
                charCarry = '0', adder = temp[temp.size() - 1];

            carry = charCarry - '0';
            s += (string(1, adder));
        }
        reverse(all(s));
        v.push_back(s);
    }

    string res = v[0];
    carry = 0;
    for (int i = 1; i < v.size(); i++) {
        string prev = res;
        string curr = v[i];
        // cout<<prev<<"="<<curr<<' ';
        res = "";
        int count = i;
        while (count--) {
            res += string(1, prev.back());
            prev.pop_back();
        }

        while (curr.size()) {
            char ch1 = curr.back();
            curr.pop_back();
            if (prev.size()) {
                char ch2 = prev.back();
                prev.pop_back();
                string temp = to_string(((int)ch1 - '0') + ((int)ch2 - '0') + carry);

                char adder, charCarry;
                if (temp.size() == 2) {
                    if (curr.size() == 0) {
                        reverse(all(temp));
                        res += temp;
                        carry = 0;
                        continue;
                    } else
                        adder = temp[temp.size() - 1], charCarry = temp[temp.size() - 2];
                } else
                    charCarry = '0', adder = temp[temp.size() - 1];

                carry = charCarry - '0';
                res += (string(1, adder));
            } else {
                string temp = to_string(((int)ch1 - '0') + carry);
                if (temp.size() == 2) reverse(all(temp));
                res += temp;
                carry = 0;
            }
        }
        reverse(all(res));
        // cout<<res<<"------"<<endl;
    }
    cout << res;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t start = clock();
    // #ifndef ONLINE_JUDGE
    //     // for getting input from input.txt
    //     freopen("inputf.in", "r", stdin);
    //     // for writing output to output.txt
    //     freopen("outputf.in", "w", stdout);
    // #endif

    ll test = 1;
    int n, m;
    cin >> n >> m;
    cout << n << '\n'
         << m << '\n';
    cout << test << endl;
    // cin>>test;
    // while(test--)	solve();

    clock_t end = clock();
    cerr << fixed << setprecision(15) << ((double)(end - start)) / CLOCKS_PER_SEC << endl;
    return 0;
}
/**
 * Test Cases:-
 */
