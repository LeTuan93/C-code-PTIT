#include<bits/stdc++.h>
using namespace std;

int checknt(int n){
     if (n<=1) return 0;
     for (int i=2;i<=sqrt(n);i++){
          if (n%i==0 ) return 0;
     }
     return 1;
}
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          int n;
          cin >> n;
          cout<<"1 ";
          for (int i=2;i<=n;i++){
               if (i%2==0) cout<<"2 ";
               else {
                    int t=checknt(i);
                    if (t==1) cout<<i<<" ";
                    else {
                         for (int j=2;j<=sqrt(n);j++){
                              if (i%j==0) {cout<<j<<" ";break;}
                         }
                    }
               }
               
          }
          cout<<endl;
     }
}