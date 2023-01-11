#include<bits/stdc++.h>
using namespace std;



int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     string s;
     string kq;
     cin >> s;
     for (int i=0;i<s.size();i++){
          if (s[i]!='A' && s[i]!='a' &&s[i]!='E' && s[i]!='e' &&s[i]!='I' && s[i]!='i' &&s[i]!='O' && s[i]!='o' &&s[i]!='U' && s[i]!='u' &&s[i]!='Y' && s[i]!='y' ){
               if (s[i]>=65 && s[i]<=90) s[i]+=32;
               kq=kq+"."+s[i];     
          }
     }
     cout<<kq;
}