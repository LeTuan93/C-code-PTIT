#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
  string name,gt,bir,dc,phone,hd ; 
};
void nhap(struct NhanVien &a){
     getline(cin,a.name);
     cin >> a.gt >> a.bir;
     cin.ignore();
     getline(cin,a.dc);
     cin >> a.phone >> a.hd;
     if (a.bir[2]!='/')  a.bir.insert(0,"0");
     if (a.bir[5]!='/')  a.bir.insert(3,"0");
     if (a.hd[2]!='/')  a.hd.insert(0,"0");
     if (a.hd[5]!='/')  a.hd.insert(3,"0");
}
void in(struct NhanVien &a){
     cout<<"00001 "<<a.name<<" "<<a.gt<<" "<<a.bir<<" "<<a.dc<<" "<<a.phone<<" "<<a.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}