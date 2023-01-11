#include<bits/stdc++.h>
using namespace std;



int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          string s;
          string kq;
          cin >> s;
          s+=" ";
          int dem=1;
          for (int i=0;i<s.size()-1;i++){
               if (s[i]==s[i+1]) {dem++;}
               else {
                    kq=kq+s[i]+to_string(dem);
                    dem=1;
               }
          }
          cout<<kq<<endl;
     }
}