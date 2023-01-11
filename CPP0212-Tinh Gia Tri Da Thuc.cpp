#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;
long long powmod(long long n,long long k,long long mod){
     long long res=1;
     while (k!=0){
          if (k%2==1){
               res*=n;
               res%=mod;
          }
          n*=n;
          n%=mod;
          k/=2;
     }
     return res;
}
int main(){
   int t;
   cin>>t;
   while (t--){
        long long n,x;
         cin >> n >>x;
         long long a[n+5];
         for (int i=0;i<n;i++) cin >> a[i];
         long long final=0;
         long long j=0;
         for (int i=n-1;i>=0;i--){
              final=(final%mod+(powmod(x,i,mod)%mod)*(a[j]%mod))%mod;
              j++;
         }
         cout<<final<<endl;
   }
}