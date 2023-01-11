#include<bits/stdc++.h>
using namespace std;


int main(){
     int t;
     cin >> t;
     cin.ignore();
     stack<string> p;
     while (t--){
          while (!p.empty()) p.pop();
          string s,tmp;
          getline(cin,s);
          stringstream ss(s);
          while (ss>> tmp){
               p.push(tmp);
          }
          while (!p.empty()){
               cout<<p.top()<<" ";
               p.pop();
          }
          cout<<endl;
     }
}