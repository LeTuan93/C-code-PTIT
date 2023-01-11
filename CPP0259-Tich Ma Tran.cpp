#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int n,m,p;
     cin >> n >> m >> p;
     int a[n+1][m+1];
     int b[m+1][p+1];
     int kq[n+1][p+1];
     memset(kq,0,sizeof(kq));
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> a[i][j];
          }
     }
     for (int i=0;i<m;i++){
          for (int j=0;j<p;j++){
               cin >> b[i][j];
          }
     }
     for (int i=0;i<n;i++){
          for (int j=0;j<p;j++){
               for (int k=0;k<m;k++) kq[i][j]+=a[i][k]*b[k][j];
               cout<<kq[i][j]<<" ";
          }
          cout<<endl;
     }
}