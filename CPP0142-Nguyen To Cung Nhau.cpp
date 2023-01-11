#include<bits/stdc++.h>
using namespace std;

int ktrant(int n){
     if (n<=1) return 0;
     for (int i=2;i<=sqrt(n);i++){
          if (n%i==0) return 0;
     }
     return 1;
}

int main(){
     int t;
     cin >> t;
     while (t--){
          int n;
          cin >> n;
          int t=0;
          for (int i=1;i<=n;i++){
               if (__gcd(i,n)==1) t++;
          }
          if (ktrant(t)==1) cout<<"1";
          else cout<<"0";
          cout<<endl;
     }
}