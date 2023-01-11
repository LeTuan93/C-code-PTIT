#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int n;
     cin >> n;
     int a[n+1];
     set<int> p;
     for (int i=0;i<n;i++){
          cin >> a[i];
          p.insert(a[i]);
     }
     for (auto x: p){
          cout<< x<<" ";
     }

}