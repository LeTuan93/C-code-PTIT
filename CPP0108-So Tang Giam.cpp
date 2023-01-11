#include<bits/stdc++.h>
using namespace std;

int checknt(int n){
     if (n<=1) return 0;
     for (int i=2;i<=sqrt(n);i++){
          if (n%i==0) return 0;
     }
     return 1; 
}
int up(int x) { 
     int n1=x%10;
     int nho=x;
     x/=10;
     while (x>0) { 
          int n2=x%10; 
          if (n1<=n2) return 0; 
          x/=10; n1=n2;
     } 
     return 1; 
     
} 
int down(int x) { 
     int n1=x%10; 
     int nho=x; 
     x/=10; 
     while (x>0) { 
          int n2=x%10; 
          if (n1>=n2) return 0; 
          x/=10; n1=n2; 
          
     } 
     return 1; 
} 
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          int n;
          cin >> n;
          n--;
          int x=1,y=9;
          while (n--){
               x*=10;
               y=y*10+9;
          }
          int cnt=0;
          for (long long i=x;i<=y;i++){
               		if (up(i)==1 || down (i)==1){
                            if(checknt(i)==1) cnt++;
					}
          }
          cout<<cnt<<"\n";
     }
}