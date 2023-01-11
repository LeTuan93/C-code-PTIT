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
          cin >> s;
          int dem=0;
          for (int i=0;i<s.size();i++){
             for (int j=i;j<s.size();j++){
               if (s[i]==s[j]) dem++;
             }
          }
          cout<<dem<<endl;
     }
}