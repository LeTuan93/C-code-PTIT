#include<bits/stdc++.h>
using namespace std;

int f[30];
int fib(int i){
	if (f[i]!=-1) return f[i];
	if (i==1) return f[i]=1;
	if (i==0) return f[i]=0;
	f[i]=fib(i-1)+fib(i-2);
	return f[i];
}
int main(){
	int t;
	cin >> t;
	memset(f,-1,sizeof(f));
	int e=fib(18);
	int d[10000];
	memset(d,0,sizeof(d));
	for (int i=0;i<=25;i++){
		d[f[i]]=1;
	}
	while (t--){
		int n;
		cin >> n;
		long long a[n+1];
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (d[a[i]]==1) cout<< a[i] << " ";
		}
		cout<<endl;
	}
}