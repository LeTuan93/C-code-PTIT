#include <bits/stdc++.h>
using namespace std;
vector<long long> a(1000001);
void era()
{
   a[0]=a[1]=1;
   for (long long i=2;i<=sqrt(1000001);i++){
      if (!a[i]){
         for (long long j=i*i;j<=1000001;j+=i){
            a[j]=1;
         } 
      }
   }
}
vector<long long> b;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);
   era();
   for (long long i = 2; i < 1000001; i++)
    {
        if (!a[i])
            b.push_back(i);
    }
      long long a1,b1;
      cin>>a1>>b1;
      long long t=max(a1,b1);
      long long t1=min(a1,b1);
      for (int i=0;i<b.size();i++){
           if (b[i]>t1 && b[i]<t) cout<<b[i]<<" ";
           if (b[i]>t) break;
      }
      
}