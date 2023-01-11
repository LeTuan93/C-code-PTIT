#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
	     int n,m;
	     cin >> n >>m;
	     vector<long long > v;
	     int x;
	     for (int i=0;i<n+m;i++){
	          cin >>x;
	          v.push_back(x);
	     } 
	     sort(v.begin(),v.end());
	     for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
	     cout<<endl;
     }
}