#include<bits/stdc++.h>
using namespace std;

long long modpow(long long n,long long k ,long long mod){
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
     cin >> t;
     while (t--){
          long long x,y,p;
          cin >> x >> y >> p;
          cout<<modpow(x,y,p)<<endl;
     }
}