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
		  getline(cin,s);
		  stringstream ss(s);
          int dc=0,dl=0;
          int cnt=0;
          while (ss>>tmp){
          		int n=stoi(tmp);
               if (n%2==1) dl++;
               else dc++;
               cnt++;
          }
          if ((cnt%2==0 && dc>dl)|| (cnt%2==1 && dl>dc)) cout<<"YES\n";
          else cout<<"NO\n";
     }
}