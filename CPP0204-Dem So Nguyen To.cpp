#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<long long> a(1000001,1);
long long max (long long a,long long b){
   if (a>=b) return a;
   else return b;
}
int main(){
   int t;
   cin>>t;
   while (t--){
   long long l,r;
   cin>>l>>r;
   for(long long i=0;i<=r-l+1;i++){
      a[i]=1;
   }
   for(long long i=2;i<=sqrt(r);i++){
      for (long long j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
         a[j-l]=0;
      }
   }
   int cnt=0;
   for (long long i=max(l,2);i<=r;i++){
      if (a[i-l]){
         cnt++;
      }
   }
   cout<<cnt<<endl;
   }
}