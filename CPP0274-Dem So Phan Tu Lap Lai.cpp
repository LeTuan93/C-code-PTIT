#include<bits/stdc++.h>
using namespace std;
int b[1000005];
int a[1000005];
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          int n;
          cin >> n;
          memset(b,0,sizeof(b));
          for (int i=1;i<=n;i++) {
               cin >> a[i];
               b[a[i]]++;
          }
          int cnt=0;
          for (int i=0;i<=1000000;i++){
               if (b[i]>1) cnt+=b[i];
          }
          cout<<cnt<<endl;
     }
}