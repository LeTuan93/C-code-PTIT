#include<bits/stdc++.h>
using namespace std;

struct Point{

     double x, y;

};
double distance(struct Point &a,struct Point &b){
     double t=sqrt(pow(abs(a.x-b.x),2)+pow(abs(a.y-b.y),2));
     return t;
}
void input(struct Point &a){
     cin>>a.x >> a.y;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}