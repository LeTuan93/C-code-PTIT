#include<bits/stdc++.h>
using namespace std;


int main(){
     int t;
     cin >> t;
     while (t--){
          long long x,y,z,n;
          cin >> x >> y >> z >> n;
          long long t=(x*y)/__gcd(x,y);
          long long t2=(t*z)/__gcd(t,z);
          long long p=1;
          int cnt=0;
          long long t3=t2;
          while (t3!=0){
               t3/=10;
               cnt++;
          }
          if (cnt>n) cout<<-1<<endl;
          else{
               n--;
               while (n--){
                    p=p*10;
               }
               long long e=p/t2;
               long long du=p%t2;
               if (du==0) t2*=e;
               else t2*=(e+1);
               cout<<t2<<endl;
          }
     }
}
