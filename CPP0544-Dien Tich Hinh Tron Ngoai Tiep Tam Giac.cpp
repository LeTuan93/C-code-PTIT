#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238;
typedef struct ps{
    double t,m;
} ps;

int main(){
    int t;
    cin >> t;
    while (t--){
        ps a, b , c;
        cin >> a.t >> a.m  >> b.t >> b.m >> c.t >> c.m ;
        double ab,ac,bc;
        ab=sqrt(abs(a.t-b.t)*abs(a.t-b.t)+abs(a.m-b.m)*abs(a.m-b.m));
        bc=sqrt(abs(b.t-c.t)*abs(b.t-c.t)+abs(b.m-c.m)*abs(b.m-c.m));
        ac=sqrt(abs(a.t-c.t)*abs(a.t-c.t)+abs(a.m-c.m)*abs(a.m-c.m));
        if (ab+ac >bc && ab+bc >ac && ac+bc >ab){
            double s=sqrt((ab+bc+ac)*(ab+bc-ac)*(bc+ac-ab)*(ac+ab-bc))/4;
            double r=(ab*bc*ac)/(4*s);
            double kq=r*r*PI;
            cout<<setprecision(3) << fixed << kq << endl;
        }
        else cout <<"INVALID\n";
    }
}