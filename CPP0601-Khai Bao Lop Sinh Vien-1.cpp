#include<bits/stdc++.h>
using namespace std;

class SinhVien {
public:
  string name,clas,bir;
  double gpa;
     void nhap (){
          getline(cin,name);
          cin >> clas;
          cin >> bir;
          cin >> gpa;
          if (bir[2]!='/')  bir.insert(0,"0");
          if (bir[5]!='/')  bir.insert(3,"0");
     }
     void xuat(){
          cout<<"B20DCCN001 ";
          cout<<name<<" "<<clas<<" "<<bir<<" "<<fixed<<setprecision(2)<<gpa;
     }
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}