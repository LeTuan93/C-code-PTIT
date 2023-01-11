#include<bits/stdc++.h>
using namespace std;

int stt=0;


class SinhVien{
public:
    string name,masv,clas,birth;
    double gpa;
    friend istream &operator  >> (istream &in,SinhVien &a){
         scanf("\n") ;
        getline(cin , a.name);
        cin >> a.clas >> a.birth >> a.gpa;
        if (a.birth[2]!='/') a.birth="0"+a.birth;
        if (a.birth[5]!='/') a.birth.insert(3,"0"); 
        stringstream ss(a.name);
        string tmp,tmp1;
        while (ss >> tmp){
            if (tmp[0]<65 || tmp[0] >90 ) tmp[0]-=32;
            for (int i=1;i<tmp.size();i++){
                if (tmp[i]>=65 && tmp[i]<=90) tmp[i]+=32;
            }
            tmp1+=tmp+" ";
        }
        a.name=tmp1;  
        stt++;
        a.masv="B20DCCN0";
        if (stt>=10) a.masv+=to_string(stt);
        else a.masv+="0"+to_string(stt);
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien a){
         cout<< a.masv<<" "<< a.name << " " << a.clas << " " << a.birth << " " << setprecision(2) << fixed << a.gpa << "\n";
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien p[], int n){
    sort (p,p+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}