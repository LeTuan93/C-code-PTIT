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
          int p=s.find("084");
          s.erase(p,3);
          cout<<s<<endl;
     }
}