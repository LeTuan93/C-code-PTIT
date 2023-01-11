#include<bits/stdc++.h>
using namespace std;


int main(){
     int t;
     cin >> t;
     while (t--){
          int n;
          cin >> n;
          long long a[n+1];
          for (int i=0;i<n;i++) cin >> a[i];
          sort(a,a+n);
          int check=0;
          for (int i=0;i<n-2;i++){
               for (int j=i+1;j<n-1;j++){
                    long long x=a[i]*a[i]+a[j]*a[j];
                    double v=(double)((double)sqrt(x)-(long long)sqrt(x));
                    if (v==0) x=sqrt(x);
                    else continue;
                    if (x!=0 && binary_search(a+j+1,a+n,x)){
                         cout<<"YES\n";
                         check=1;
                         break;
                    }
               }
               if (check==1) break;
          }
          if (check==0) cout<<"NO\n";
     }
}