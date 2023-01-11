#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
     long long  t,m;
};
long long ucln(long long a,long long b){
     while (a*b!=0){
          if (a>=b) a%=b;
          else b%=a;
     }
     return a+b;
}
void nhap(struct PhanSo &a){
     cin >> a.t >> a.m;
}
void rutgon(struct PhanSo &a){
     long long k=ucln(a.t,a.m);
     a.t=a.t/k;
     a.m=a.m/k;
}
void in(struct PhanSo &a){
     cout<<a.t<<"/"<<a.m;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}