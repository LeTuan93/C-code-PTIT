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
   int t;
   cin>>t;
   era();
   for (long long i = 2; i < 1000001; i++)
    {
        if (!a[i])
            b.push_back(i);
    }
   while(t--){
        map<long long,long long> p;
      long long n;
      cin>>n;
      for (int i = 0; i< b.size(); i++) {
           if (n<b[i]) break;
        long long tmp=0;
        while (n % b[i] == 0) {
            n /= b[i];
            tmp++;
        }
        if (tmp>=1) p.insert({b[i],tmp});
      }
      if (n>1) p.insert({n,1});
      long long odd=1;
      long long no=1;
      for (auto i:p){
           if (i.first%2==1) odd*=(i.second+1);
           no*=(i.second+1);
      }
      cout<<no-odd<<endl;
   }
}