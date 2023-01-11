#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
private:
  string name,gt,bir,dc,phone,hd ; 
public:
     void nhap(){
          getline(cin,name);
          cin >> gt >> bir;
          cin.ignore();
          getline(cin,dc);
          cin >> phone >> hd;
          if (bir[2]!='/')  bir.insert(0,"0");
          if (bir[5]!='/')  bir.insert(3,"0");
          if (hd[2]!='/')  hd.insert(0,"0");
          if (hd[5]!='/')  hd.insert(3,"0");
     }
     void xuat(){
          cout<<"00001 "<<name<<" "<<gt<<" "<<bir<<" "<<dc<<" "<<phone<<" "<<hd;
     }
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}