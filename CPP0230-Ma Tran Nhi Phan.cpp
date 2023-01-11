#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int n;
     cin >> n;
         int a[n+5][n+5];
         for (int i=1;i<=n;i++){
              for (int j=1;j<=3;j++){
                   cin >> a[i][j];
              }
         }
         int cnt=0;
         for (int i=1;i<=n;i++){
              int dem0=0,dem1=0;
              for (int j=1;j<=3;j++){
                   if (a[i][j]==1) dem1++;
                   else dem0++;
              }
              if (dem1>dem0) cnt++;
         }
         cout<<cnt;
}