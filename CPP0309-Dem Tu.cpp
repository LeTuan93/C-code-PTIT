#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     cin.ignore();
     while (t--){
          string s,tmp;
          getline(cin ,s);
          stringstream ss(s);
          int dem=0;
          while (ss>>tmp){
               dem+=1;
          }
          cout<<dem<<endl;
     }
}