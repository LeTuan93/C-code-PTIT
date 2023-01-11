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
vector<long long > b;
int main() {
   int t;
   cin >> t;
   era();
   for (int i=0;i<1000001;i++){
   	if (a[i]==0){
   		b.push_back(i);
	   }
   }
   for (int i=0;i<t;i++){
      long long n;
      cin >> n;
      int cnt=0;
      for (long long i=0;i<b.size();i++){
			long long t=b[i]*b[i];
			if (t<=n) cnt++;
			else break;
      }
      cout<<cnt<<endl;
   }
}