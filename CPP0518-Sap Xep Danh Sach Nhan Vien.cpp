#include<bits/stdc++.h>
using namespace std;

int cnt=0;

struct NhanVien{
	string stt,name,gender,address,tax,birth,sign,ngay,thang,nam;
};

void nhap(struct NhanVien &a){
	cnt++;
	if (cnt>=1 && cnt<=9) a.stt="0000"+to_string(cnt);
	else if (cnt>=10 && cnt <= 99) a.stt="000"+to_string(cnt);
	cin.ignore();
	getline(cin , a.name);
	cin >> a.gender;
	cin >> a.birth;
	cin.ignore();
	getline(cin, a.address);
	cin >> a.tax;
	cin >> a.sign;
	if (a.birth[2]!='/') a.birth="0"+a.birth;
	if (a.birth[5]!= '/') a.birth.insert(3,"0");
	if (a.sign[2]!='/') a.sign="0"+a.sign;
	if (a.sign[5] != '/') a.sign.insert(3,"0");
	a.ngay+=a.birth[0];a.ngay+=a.birth[1];
	a.thang+=a.birth[3];a.thang+=a.birth[4];
	a.nam+=a.birth[6];a.nam+=a.birth[7];a.nam+=a.birth[8];a.nam+=a.birth[9];
}

bool cmp(NhanVien a, NhanVien b){
     if(a.nam==b.nam){
             if(a.thang==b.thang) return a.ngay<b.ngay;
             else if (a.thang <b.thang);
         }
        return a.nam<b.nam;
}

void sapxep(NhanVien a[], int n){
	sort(a,a+n,cmp);
}

void inds(NhanVien p[], int n){
	for(int i=0;i<n;i++){
        cout<<p[i].stt<<" "<<p[i].name<<" "<<p[i].gender<<" "<<p[i].birth<<" ";
        cout<<p[i].address<<" "<<p[i].tax<<" "<<p[i].sign<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}