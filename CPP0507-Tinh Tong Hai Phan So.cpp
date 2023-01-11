#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
  long long tu,mau; 
};

long long ucln(long long  a,long long  b){
     while (a*b!=0){
          if (a>=b) a%=b;
          else b%=a;
     }
     return a+b;
}
long long bcnn(long long a,long long b){
     return (a*b)/ucln(a,b);
}
void nhap(struct PhanSo &a){
     cin>> a.tu >> a.mau;
}
struct PhanSo tong(struct PhanSo &a,struct PhanSo &b){
     struct PhanSo x;
     long long p=bcnn(a.mau,b.mau);
     a.tu=p/a.mau*a.tu;
     b.tu=p/b.mau*b.tu;
     long long tu=a.tu+b.tu;
     long long p1=ucln(tu,p);
     p/=p1;
     tu/=p1;
     x.tu=tu;
     x.mau=p;
     return x;
     
}
void in(struct PhanSo &a){
     cout<<a.tu<<"/"<<a.mau;
     
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}