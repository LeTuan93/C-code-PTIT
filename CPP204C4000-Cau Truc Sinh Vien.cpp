#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
  string name,clas,bir;
  double gpa;
};
void nhapThongTinSV (struct SinhVien &a){
     getline(cin,a.name);
     cin >> a.clas;
     cin >> a.bir;
     cin >> a.gpa;
     if (a.bir[2]!='/')  a.bir.insert(0,"0");
     if (a.bir[5]!='/')  a.bir.insert(3,"0");
}
void inThongTinSV(struct SinhVien &a){
     cout<<"N20DCCN001 ";
     cout<<a.name<<" "<<a.clas<<" "<<a.bir<<" "<<fixed<<setprecision(2)<<a.gpa;
}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}