#include<bits/stdc++.h>
using namespace std;


int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     string s,tmp;
     getline(cin,s);
     stringstream ss(s);
     string kq="";
     string tmp1;
     while (ss>> tmp){
          tmp1=tmp;
        if (isupper(tmp[0])==0) tmp[0]-=32;
        for (int i=1;i<tmp.size();i++){
             if (tmp[i]>=65 && tmp[i]<=90){
                  tmp[i]+=32;
             }
        }
        kq+=tmp+" ";
     }
     kq.erase(kq.size()-tmp1.size()-2,tmp1.size()+2);
     kq=kq+", ";
     for (int i=0;i<tmp1.size();i++){
          if (tmp1[i]>=97 && tmp1[i]<=122) tmp1[i]-=32;
     }
     kq+=tmp1;
     cout<<kq;
}