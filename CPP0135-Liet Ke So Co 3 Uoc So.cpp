#include <bits/stdc++.h>
using namespace std;
vector<long long> a(1000001,0);
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
   ios::sync_with_stdio(0);
   cin.tie(NULL);
   cout.tie(NULL);
   era();
   for (long long i = 2; i < 1000001; i++)
    {
        if (!a[i]) b.push_back(i);
    }
    int t;
    cin >> t;
    while (t--){
	long long n;
	cin >> n;
	for (int i=0;i<b.size();i++){
		long long t=b[i]*b[i];
		if (t<=n) cout<<t<<" ";
		else break;
	}
	cout<<endl;
	}
}