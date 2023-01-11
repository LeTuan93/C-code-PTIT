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
          for (int i=0;i<n;i++) cin >> a[i];
          sort(a,a+n);
          int j=n-1;
          int tmp;
          for (int i=0;i<n;i++){
               if (tmp==a[j]) break;
               cout<< a[j]<<" ";
               if (a[j]==a[i]) break;
               cout<<a[i]<<" ";
               j--;
               tmp=a[i];
          }
          cout<<endl;
     }
}