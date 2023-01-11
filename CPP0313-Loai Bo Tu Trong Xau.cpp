#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     string s;
     getline (cin ,s);
     s=' '+s+' ';
     string s1;
     getline(cin , s1);
     int first=s1.size();
     s1=' '+s1+' ';
     int t=s.find(s1);
	 while (t!=-1){
	 	int t=s.find(s1);
	 	if (t==-1) break;
     	s.erase(t+1,first+1);
 	 }
 	 s.erase(0,1);
     cout<<s;
}