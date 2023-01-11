#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
     int t;
     cin >> t;
     cin.ignore();
     while (t--){
          int n;
          cin >> n;
          string sol="";
          for (int i=1;i<=n;i++) sol+='0';
          cout<<sol<<" ";
          long long p=1;
          int n1=n;
          while (n1--){
               p*=2;
          }
          p=p-1;
          while (p--){
               int i=sol.length()-1;
               while (sol[i]=='1') i--;
               sol[i]='1';
               for (int j=i+1;j<sol.length();j++) sol[j]='0';
               cout<<sol<<" ";
          }
          cout<<endl;
          
     }
}