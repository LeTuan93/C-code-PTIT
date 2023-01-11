#include<bits/stdc++.h>
using namespace std;


int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     string tmp,s,tmp1;
     getline (cin ,s);
     stringstream ss(s);
     string kq="";
     while (ss>>tmp){
          tmp1=tmp;
          if (tmp[0]>='A' && tmp[0]<='Z'){
               tmp[0]+=32;
          }
          kq+=tmp[0];
     }
     for (int i=0;i<tmp1.size();i++){
          if (tmp1[i]>='A' && tmp1[i]<='Z') tmp1[i]+=32;
     }
     kq=tmp1+kq;
     kq.erase(kq.size()-1,1);
     cout<<kq<<"@ptit.edu.vn";
}