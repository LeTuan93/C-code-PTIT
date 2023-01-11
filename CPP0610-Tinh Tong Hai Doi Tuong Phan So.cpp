#include <bits/stdc++.h>
using namespace std;
class PhanSo{
private:
	long long tu,mau;
public:
	PhanSo(long long a=0,long long b=1){
		tu=a;
		mau=b;
	}
	void rutgon(){
		long long k=__gcd(tu,mau);
		tu/=k;
		mau/=k;
	}
	friend istream &operator>>(istream &in,PhanSo &a){
		in>>a.tu>>a.mau;
		return in;
	}
	friend ostream &operator<<(ostream &out,PhanSo a){
		cout<<a.tu<<"/"<<a.mau;
		return out;
	}
	PhanSo operator + (PhanSo b){
		PhanSo a;
		a.tu=tu*b.mau+mau*b.tu;
		a.mau=mau*b.mau;
		a.rutgon();
		return a;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}