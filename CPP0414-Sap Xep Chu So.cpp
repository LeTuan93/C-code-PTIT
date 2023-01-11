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
          int dd[10];
          memset(dd,0,sizeof(dd));
          while (n--){
               long long a;
               cin >> a;
               while (a!=0){
                    dd[a%10]=1;
                    a/=10;
               }
          }
          for (int i=0;i<10;i++){
               if (dd[i]!=0) cout<<i<<" ";
          }
          cout<<endl;
     }
}