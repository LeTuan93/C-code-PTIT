#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
        int a,b;
        cin >> a >> b;
         int x[a+5][b+5];
         int y[a+5][b+5];
         for (int i=1;i<=a;i++){
              for (int j=1;j<=b;j++){
                   cin >> x[i][j];
                   y[i][j]=x[i][j];
              }
         }
         for (int i=1;i<=a;i++){
              for (int j=1;j<=b;j++){
                   if (x[i][j]==1){
                        for (int j1=1;j1<=b;j1++){
                             y[i][j1]=1;
                        }
                        for (int i1=1;i1<=a;i1++){
                             y[i1][j]=1;
                        }
                   }
              }
         }
         for (int i=1;i<=a;i++){
              for (int j=1;j<=b;j++){
                   cout<<  y[i][j]<<" ";
              }
              cout<<endl;
         }
          
     }
}