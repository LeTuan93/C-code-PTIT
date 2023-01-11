#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          int n,k;
          cin >> n >> k;
          int a[n+1];
          for (int i=0;i<n;i++) cin >> a[i];
          sort(a,a+n);
          int j=n-1;
          while (k--){
               cout<<a[j]<<" ";
               j--;
          }
          cout<<endl;
     }
}