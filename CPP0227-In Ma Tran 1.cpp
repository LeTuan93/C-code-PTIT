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
          for (int i=1;i<=n;i++){
               int x,y;
               if (i%2==1) {
                    for (int j=1;j<=n;j++){
                         cout<< a[i][j]<<" ";
                    }
               }
               else {
                    for (int j=n;j>=1;j--){
                         cout<< a[i][j]<<" ";
                    }
               }
         }
         cout<<endl;
     }
}