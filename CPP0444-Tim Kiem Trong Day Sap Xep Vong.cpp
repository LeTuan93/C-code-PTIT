#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
	   int n,x;
	   cin >> n >> x;
	   int a[n+1];
	   int vt=-1;
	   a[0]=0;
	   for (int i=1;i<=n;i++) {
	        cin >> a[i];
	        if (a[i]<a[i-1]) vt=i;
	   }
	   if (vt==-1){
	        auto it=lower_bound(a+1,a+n+1,x);
	        cout<<it-a<<endl;
	   }
	   else {
	        int  check=binary_search(a+1,a+vt,x);
	        if (check==1){
	             auto it=lower_bound(a+1,a+vt,x);
	             cout<<it-a<<endl;
	        }
	        else {
	             auto it=lower_bound(a+vt,a+n+1,x);
	             cout<<it-a<<endl;
	        }
	   }
     }
}