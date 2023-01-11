#include<bits/stdc++.h>
using namespace std;

int main (){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          string s;
          cin >> s;
          int check=0;
          for (int i=0;i<s.size()-1;i++){
          	string k="",k1="";
          	k+=s[i];
          	k1+=s[i+1];
               if (stoi(k)!=(stoi(k1)+1) && stoi(k)!=(stoi(k1)-1)){
                    check=1;break;
               }
          }
          if (check==0) cout<<"YES\n";
          else cout<<"NO\n";
     }
}