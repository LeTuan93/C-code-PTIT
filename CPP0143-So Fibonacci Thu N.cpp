#include<bits/stdc++.h>
using namespace std;


long long F[94];
long long QHD(int n){
	if (F[n]!=-1) return F[n];
	if (n==1 || n==2 ) return F[n]=1;
	F[n]=QHD(n-1)+QHD(n-2);
	return F[n];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int i=0;i<=93;i++) F[i]=-1;
	while (t--){
		int n;
		cin >> n;
		cout<< QHD(n)<<endl;
	}
}