#include<bits/stdc++.h>
using namespace std;

struct ThiSinh{
     string name,ns;
     double x,y,z;
};
void nhap(struct ThiSinh &a){
     getline(cin ,a.name);
     cin>> a.ns >> a.x >> a.y >> a.z;
}
void in(struct ThiSinh &a){
     double t=a.x+a.y+a.z;
     cout<< a.name <<" "<<a.ns <<" "<<fixed<<setprecision(1)<<t;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}