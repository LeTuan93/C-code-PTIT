#include <bits/stdc++.h>
using namespace std;
vector<long long> a(1000001);
void era()
{
   a[0]=a[1]=1;
   for (long long i=2;i<=sqrt(1000001);i++){
      if (!a[i]){
         for (long long j=i*i;j<1000001;j+=i){
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
    int t;
    cin >> t;
    while (t--){
      long long a,b1;
      cin>>a>>b1;
      for (int i=0;i<b.size();i++){
           if (b[i]>=a && b[i]<=b1) cout<<b[i]<<" ";
      }
      cout<<endl;
  }
      
}