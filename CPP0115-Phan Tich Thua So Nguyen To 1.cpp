#include<bits/stdc++.h>
using namespace std;

int  a[10005];
void era(){
     a[0]=a[1]=1;
     for (int i=2;i<=10000;i++){
          if (a[i]==0){
               for (int j=i*i;j<=10000;j+=i) a[j]=1;
          }
     }
}
vector <int > b;
int main (){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     era();
     for (int i=0;i<=10000;i++){
          if (a[i]==0){
               b.push_back(i);
          }
     }
     while (t--){
          int n;
          cin >> n;
          for (int i=0;i<b.size();i++){
               int mu=0;
               while (n%b[i]==0){
                    mu++;
                    n/=b[i];
               }
               if (mu!=0) cout<< b[i] <<" "<< mu<<" ";
               if (n==1) break;
          }
          cout<<endl;
     }
}