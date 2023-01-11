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
	     vector<int > v;
	     cin >> n >>m;
	     int a[n+1][m+1];
	     for (int i=0;i<n;i++){
	          for (int j=0;j<m;j++){
	               cin >> a[i][j];
	               v.push_back(a[i][j]);
	          }
	     }
	     sort(v.begin(),v.end());
	     for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
	     cout<<endl;
     }
}