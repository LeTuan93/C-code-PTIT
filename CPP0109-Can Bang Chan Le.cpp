#include<bits/stdc++.h>
using namespace std;
int n;
vector<int > a;
void check(int n){
     int x,y;
     if (n==2) {x=10;y=99;}
     else if (n==4) {x=1000;y=9999;}
     else if (n==6) {x=100000;y=999999;}
     for (int i=x;i<=y;i++){
          int i1=i;
          int demc=0,deml=0;
          while (i1!=0){
               int mod=i1%10;
               if (mod %2==0) demc++;
               else deml++;
               i1/=10;
          }
          if (demc==deml ) a.push_back(i);
     }
}

int main (){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n;
     check(n);
     int cnt=0;
     for (int i=0;i<a.size();i++) 
     {
     	cout<<a[i]<<" ";
     	cnt++;
     	if (cnt==10){
     		cout<<endl;
     		cnt=0;
		 }
	 }
}