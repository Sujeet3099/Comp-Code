#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   Print Encodings
 * link          :   
 */

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (int i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

#define MOD 1000000007

void printEncoding(string s,string res){
   if(s.size()==0){
      cout<<res<<endl;
      return;
   }
   else if(s.size()==1){
      if(s[0] == '0')  return;
      else{
         int num = s[0]-'0';
         string res1 = string(1,'a'+(num-1));
         // cout<<res+res1<<endl;
         // return;
         s.erase(0,1);
         printEncoding(s,res+res1);
      }
   }
   else{
      int num1 = s[0]-'0';
      int num2 = (s[0]-'0')*10+s[1]-'0';
      string res1 = string(1,'a'+(num1-1));
      s.erase(0,1);
      printEncoding(s,res+res1);
      if(num2<=26){
         string res1 = string(1,'a'+(num2-1));
         s.erase(0,1);
         printEncoding(s,res+res1);
         return;
      }
   }

}


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   clock_t start=clock();

   string s;cin>>s;
   // int num1 = s[0]-'0';
   // int num2 = (s[0]-'0')*10+s[1]-'0';
   // string res = string(1,'a'+(num1-1));
   // cout<<res;
   // printEncoding(s,"");
   int x = 109;
   int y = x/10;
   cout<<y;


   clock_t end=clock();
   cerr<<fixed<<setprecision(15)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
   return 0;
}
/**
 * Test Cases:-
 */

