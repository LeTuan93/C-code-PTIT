#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
     string name,gt,ns,dc,mst,hd;
};

void nhap(struct NhanVien &a){
     cin.ignore();
     getline (cin , a.name);
     cin >> a.gt >> a.ns ;
     cin.ignore();
     getline (cin , a.dc);
     cin >> a.mst >> a.hd;
     if (a.ns[2]!='/') a.ns.insert(0,"0");
     if (a.ns[5]!='/') a.ns.insert(3,"0");
     if (a.hd[2]!='/') a.hd.insert(0,"0");
     if (a.hd[5]!='/') a.hd.insert(3,"0");
}     

void inds(struct NhanVien a[],int n){
     for (int i=0;i<n;i++){
          int k=i+1,s=0;
		while(k!=0){
			s++;
			k/=10;
		}
		if(s==1) cout<<"0000";
		else cout<<"000";
		cout<<i+1<<" ";
          cout<<a[i].name<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].hd;
          cout<<endl;
     }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}