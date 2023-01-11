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
      long long n,dem=0;
      cin>>n;
      for (int i = 0; i< b.size(); i++) {
         if (n<i){break;}
        long long tmp=0;
        while (n % b[i] == 0) {
            n /= b[i];
            tmp++;
        }
        if (tmp>=1) cout<<b[i]<<" "<<tmp<<endl;
      }
      if (n>1) cout << n << " " << 1 << "\n";
      cout<<endl;
}
      
      