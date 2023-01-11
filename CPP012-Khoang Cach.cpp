#include<bits/stdc++.h>
using namespace std;

int main (){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
          double x,y,x1,y1;
          cin >> x>>y>>x1>>y1;
          double kq=sqrt(pow(abs(x-x1),2)+pow(abs(y-y1),2));
          cout<<setprecision(4)<<fixed<<kq<<endl;
     }
}