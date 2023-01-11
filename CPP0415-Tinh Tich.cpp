#include<bits/stdc++.h>
using namespace std;



int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
         int n,m;
         cin >> n >>m;
         long long a[n+1],b[m+1];
         for (int i=0;i<n;i++) cin >> a[i];
         for (int i=0;i<m;i++) cin >> b[i];
         sort(a,a+n);
         sort(b,b+n);
         long long t=a[n-1]*b[0];
         cout<<t<<endl;
     }
}