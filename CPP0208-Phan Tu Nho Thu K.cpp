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
           int a[n+5];
           for (int i=1;i<=n;i++) cin >> a[i];
           sort(a+1,a+n+1);
           cout<<a[k]<<endl;
     }
}