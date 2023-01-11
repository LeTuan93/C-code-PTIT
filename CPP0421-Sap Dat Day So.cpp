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
        long long a[n+5];
        long long kq[n+5];
        memset(kq,0,sizeof(kq));
        for (int i=0;i<n;i++) {
             cin >> a[i];
             if (a[i]>=0 && a[i]<=n-1) kq[a[i]]=1;
        }
        for (int i=0;i<n;i++){
             if (kq[i]==1) cout<<i<<" ";
             else cout<<"-1 ";
        }
        cout<<endl;
     }
}