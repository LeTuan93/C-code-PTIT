#include<bits/stdc++.h>
using namespace std;

class SinhVien {
private:
  string name,clas,bir;
  double gpa;
public:
     friend istream& operator >> (istream &in ,SinhVien& a);
     friend ostream& operator << (ostream &out , SinhVien a);
     friend void chuanhoa(SinhVien &a);
};
istream& operator >> (istream &in ,SinhVien& a){
     getline(in,a.name);
          in >> a.clas;
          in >> a.bir;
          in >> a.gpa;
          if (a.bir[2]!='/')  a.bir.insert(0,"0");
          if (a.bir[5]!='/')  a.bir.insert(3,"0");
          chuanhoa(a);
     return in;
}
ostream& operator << (ostream &out , SinhVien a){
     cout<<"B20DCCN001 ";
     cout<<a.name<<" "<<a.clas<<" "<<a.bir<<" "<<fixed<<setprecision(2)<<a.gpa;
     return out;
}
void chuanhoa(SinhVien &a){
     string res="";
     stringstream ss(a.name);
     string token;
     while (ss >> token){
          res+=toupper(token[0]);
          for (int i=1;i<token.size();i++){
               res+=tolower(token[i]);
          }
          res+=" ";
     }
     res.erase(res.size()-1);
     a.name=res;
     
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}