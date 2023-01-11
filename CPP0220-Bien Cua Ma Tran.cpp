#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
     int n;
     cin >> n;
         int a[n+5][n+5];
         for (int i=1;i<=n;i++){
              for (int j=1;j<=n;j++){
                   cin >> a[i][j];
              }
         }
          for (int j=1;j<=n;j++) cout<< a[1][j]<<" ";
          cout<<endl;
          for (int i=2;i<n;i++){
               for (int j=1;j<=n;j++){
                    if (j==1 || j==n) cout<<a[i][j]<<" ";
                    else cout<<"  ";
               }
               cout<<endl;
          }
          for (int j=1;j<=n;j++) cout<< a[n][j]<<" ";
          cout<<endl;
     }
}