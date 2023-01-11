#include<bits/stdc++.h>
using namespace std;

class PhanSo{
private:
     long long  t,m;
public:
     PhanSo(long long ,long long);
     void rutgon(){
          long long k=__gcd(t,m);
          t=t/k;
          m=m/k;
     }
     friend istream& operator >> (istream &in,PhanSo &a);
     friend ostream& operator << (ostream &out,PhanSo a);
};
PhanSo::PhanSo(long long a,long long b){
     t=a;
     m=b;
}
istream& operator >> (istream &in,PhanSo &a){
     in >> a.t >> a.m;
     return in;
}

ostream& operator << (ostream &out,PhanSo a){
     cout << a.t<<"/"<<a.m;
     return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}