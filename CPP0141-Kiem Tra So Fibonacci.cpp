#include <bits/stdc++.h>
using namespace std;

long long f[95];
long long fib(int n){
     if (n==0 || n==1) return f[n]=1;
     if (f[n]!=-1) return f[n];
     f[n]=fib(n-1)+fib(n-2);
     return f[n];
}
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     memset(f,-1,sizeof(f));
     fib(93);
     while (t--){
          long long n;
          cin >> n;
          if (n==0) cout<<"YES\n";
          else{
	          int check=0;
	          for (int i=0;i<93;i++){
	               if (f[i]==n) check=1;
	          }
	          if (check==1) cout<<"YES\n";
	          else cout<<"NO\n";
	      }
     }
}