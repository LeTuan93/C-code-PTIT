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
	long long n,k;
	cin >> n >> k;
	vector<long long > save;
	for (int i=0;i<b.size();i++){
		while (n%b[i]==0){
			n/=b[i];
			save.push_back(b[i]);
		}
		if (b[i]> n) break;
	}
	if (n>1) save.push_back(n);
	if (save.size()<k) cout<<-1;
	else cout<<save[k-1];
	cout <<endl;
	
	}
}