#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n+1][n+1];
		map<int,int> mp;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin >> a[i][j];
				mp[a[i][j]]++;
			}
		}
		for (int j=0;j<n;j++){
			if (mp[a[0][j]]==n){
				mp[a[0][j]]=-2;
			}
			else if (mp[a[0][j]]==-2){
				mp[a[0][j]]=-1;
			}
		}
		int sum=0;
		for (int j=0;j<n;j++){
			if (mp[a[0][j]]==-2) sum++;
		}
		cout<<sum<<endl;
	}
}