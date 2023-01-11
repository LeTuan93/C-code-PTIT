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
	  int kq=INT_MAX;
	  int kq1;
	  for (int i=0;i<n;i++) cin >> a[i];
	  for (int i=0;i<n-1;i++){
	       for (int j=i+1;j<n;j++){
	            int b=abs(a[i]+a[j]);
	           if (kq>b){
	               kq1=a[i]+a[j];
	               kq=b;
	           } 
	       }
	  }
	  cout<<kq1<<endl;
     }
}