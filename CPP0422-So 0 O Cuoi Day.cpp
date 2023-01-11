#include<bits/stdc++.h>
using namespace std;
vector<long long > p;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
     	p.clear();
		long long n;
		cin >> n;
		long long x;
		int dem=0;
		while (n--){
			cin >> x;
			if (x==0) dem++;
			else p.push_back(x);
		}
		for (int i=0;i<p.size();i++) cout<<p[i]<<" ";
		while (dem--){
		     cout<<"0 ";
		}
		cout<<endl;
     }
}