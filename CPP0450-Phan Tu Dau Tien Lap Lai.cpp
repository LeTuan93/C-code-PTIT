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
          int a[n+1];
          int d[1000005];
          memset(d,0,sizeof(d));
          int kq;
          int check=0;
          for (int i=0;i<n;i++){
               cin >> a[i];
               d[a[i]]++;
               if (d[a[i]]==2 && check==0) {
                    kq=a[i];
                    check=1;
               }
          }
          if (check==0) cout<<-1<<endl;
          else cout<<kq<<endl;
          
     }
}