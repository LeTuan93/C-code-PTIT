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
         int kq=0;
         vector<int> b;
          for (int i=0;i<n;i++) {
               cin >> a[i];
               if (a[i]<=100) b.push_back(a[i]);
          }
          for (int i=0;i<b.size();i++){
               for (int j=i+1;j<b.size();j++){
                    if (b[i]+b[j]==k) kq+=1;
               }
          }
          cout<<kq<<endl;
     }
}