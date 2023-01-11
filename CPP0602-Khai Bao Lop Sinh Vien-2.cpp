#include<bits/stdc++.h>
using namespace std;

class SinhVien {
private:
  string name,clas,bir;
  double gpa;
public:
     friend istream& operator >> (istream &in ,SinhVien& a);
     friend ostream& operator << (ostream &out , SinhVien a);
};
istream& operator >> (istream &in ,SinhVien& a){
     getline(in,a.name);
          in >> a.clas;
          in >> a.bir;
          in >> a.gpa;
          if (a.bir[2]!='/')  a.bir.insert(0,"0");
          if (a.bir[5]!='/')  a.bir.insert(3,"0");
     return in;
}
ostream& operator << (ostream &out , SinhVien a){
     cout<<"B20DCCN001 ";
     cout<<a.name<<" "<<a.clas<<" "<<a.bir<<" "<<fixed<<setprecision(2)<<a.gpa;
     return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}