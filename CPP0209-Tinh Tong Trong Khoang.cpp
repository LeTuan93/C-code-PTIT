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
           while (k--){
                int x,y;
                cin >> x>> y;
                long long tong=0;
                for (int i=x;i<=y;i++){
                    tong+=a[i];
                }
                cout<<tong<<endl;
           }
           
     }
}