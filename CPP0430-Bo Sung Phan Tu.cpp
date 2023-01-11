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
          set<int > s;
          int in=INT_MAX;
          int ax=INT_MIN;
	     for (int i=0;i<n;i++) {
	          cin >> a[i];
	          ax=max(ax,a[i]);
               in=min(in,a[i]);	          
	          s.insert(a[i]);
	     }
	     cout<<ax-in+1-s.size()<<endl;
     }
}