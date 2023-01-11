#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string name,maSv,classs,birth;
	double gpa;
} ;

void nhap(SinhVien a[],int n){
	for (int i=1;i<=n;i++){
		cin.ignore();
		getline(cin,a[i].name);
		cin >> a[i].maSv;
		cin >> a[i].birth;
		cin >> a[i].gpa;
		if (a[i].birth[2]!='/') a[i].birth="0"+a[i].birth;
		if (a[i].birth[5]!='/') a[i].birth.insert(3,"0");
	}
}

void in (SinhVien a[], int n){
	for (int i=1;i<=n;i++){
		cout << "B20DCCN";
		if (i>=1 && i<=9) cout<<"00"<<i<<" ";
		else if (i>=10 && i<=99) cout<<"0"<<i<<" ";
		else cout<<i<<" ";
		cout<< a[i].name << " " << a[i].maSv << " " << a[i].birth << " " ;
		cout << setprecision(2) << fixed << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}