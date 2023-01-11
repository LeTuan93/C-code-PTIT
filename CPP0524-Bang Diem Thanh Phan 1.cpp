#include<bits/stdc++.h>
using namespace std;

struct  SinhVien{
	string masv,ten,lop;
	double d1,d2,d3;
};

void nhap(SinhVien &a){
	cin >> a.masv;
	cin.ignore();
	getline(cin ,a.ten);
	cin >> a.lop;
	cin >> a.d1>> a.d2>> a.d3;
}

bool cmp(SinhVien a,SinhVien b){
	return a.masv < b.masv;
}

void in_ds(SinhVien a[], int n){
	for (int i=0;i<n;i++){
		cout << i+1 << " " << a[i].masv << " " << a[i].ten << " " << a[i].lop << " "; 
		cout << setprecision(1) << fixed << a[i].d1  << " ";
		cout << setprecision(1) << fixed << a[i].d2  << " "; 
		cout << setprecision(1) << fixed << a[i].d3<<endl;
	}
}
void sap_xep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}