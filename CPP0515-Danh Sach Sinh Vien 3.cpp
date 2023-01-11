#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string name,maClass,classs,birth,maSv;
	double gpa;
} ;



void nhap(SinhVien a[],int n){
	for (int i=1;i<=n;i++){
		cin.ignore();
		getline(cin,a[i].name);
		cin >> a[i].maClass;
		cin >> a[i].birth;
		cin >> a[i].gpa;
		if (a[i].birth[2]!='/') a[i].birth="0"+a[i].birth;
		if (a[i].birth[5]!='/') a[i].birth.insert(3,"0");
		string tmp="",tmp1="";
		stringstream ss(a[i].name);
		while (ss >> tmp) {
			if (tmp[0]>=97 && tmp[0]<=122) tmp[0]-=32;
			for (int i=1;i<tmp.size();i++){
				if (tmp[i]>=65 && tmp[i]<=90) tmp[i]+=32;
			}
			tmp1+=tmp+" "; 
		}
		tmp1.erase(tmp1.size()-1,1);
		a[i].name=tmp1;
		a[i].maSv+="B20DCCN";
		if (i>=1 && i<=9) a[i].maSv+="00"+to_string(i);
		else if (i>=10 && i<=99) a[i].maSv+="0"+to_string(i);
	}
}

void sapxep(SinhVien a[], int n){
     for (int i=1;i<=n;i++){
          for (int j=i+1;j<=n;j++){
               if (a[i].gpa <a[j].gpa){
                    string nametmp=a[i].name;
                    a[i].name=a[j].name;
                    a[j].name=nametmp;
                    string maSvtmp=a[i].maSv;
                    a[i].maSv=a[j].maSv;
                    a[j].maSv=maSvtmp;
                    string classstmp=a[i].classs;
                    a[i].classs=a[j].classs;
                    a[j].classs=classstmp;
                    string birthtmp=a[i].birth;
                    a[i].birth=a[j].birth;
                    a[j].birth=birthtmp;
                    float gpatmp=a[i].gpa;
                    a[i].gpa=a[j].gpa;
                    a[j].gpa=gpatmp;
                    string maClasstmp=a[i].maClass;
                    a[i].maClass=a[j].maClass;
                    a[j].maClass=maClasstmp;
               }
          }
          
     }
}

void in (SinhVien a[], int n){
	for (int i=1;i<=n;i++){
		cout <<a[i].maSv << " " << a[i].name << " " << a[i].maClass << " " << a[i].birth << " " ;
		cout << setprecision(2) << fixed << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}