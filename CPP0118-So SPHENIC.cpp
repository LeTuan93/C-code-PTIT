#include<bits/stdc++.h>
using namespace std;

long long a[10005];
void era(){
     a[0]=a[1]=1;
     for (int i=2;i<=sqrt(10001);i++){
          if (a[i]==0){
               for (int j=i*i;j<=10001;j+=i){
                    a[j]=1;
               }
          }
     }
}
vector <long long > b;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     memset(a,0,sizeof(a));
     era();
     for (int i=0;i<=10000;i++){
          if (a[i]==0){
               b.push_back(i);
      }
     }
     while (t--){
          int n;
          cin >> n;
          int cnt=0;
          for (int i=0;i<b.size();i++){
               if (n%b[i]==0){
                    n/=b[i];
                    cnt++;
               }
          }
          if (cnt==3 && n==1) cout<<1;
          else cout<<0;
          cout<<endl;
     }
}