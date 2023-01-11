#include<bits/stdc++.h>
using namespace std;

int stt=0;

class SinhVien{
private:
    string name,masv,clas,birth;
    double gpa;
    friend istream &operator  >> (istream &in,SinhVien &a){
        cin.ignore();
        getline(cin , a.name);
        cin >> a.clas >> a.birth >> a.gpa;
        if (a.birth[2]!='/') a.birth="0"+a.birth;
        if (a.birth[5]!='/') a.birth.insert(3,"0"); 
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien a){
        stt++;
        cout<<"B20DCCN0";
        if (stt>=10) cout << stt << " ";
        else cout<< "0" << stt << " ";
        cout << a.name << " " << a.clas << " " << a.birth << " ";
        cout << setprecision(2) << fixed << a.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}