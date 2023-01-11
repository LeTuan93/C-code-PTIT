#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin >> n;
		long long a[n+1];
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		long long chenh=LONG_LONG_MAX;
		for (int i=0;i<n-1;i++){
			if (a[i+1]-a[i]<chenh) chenh=a[i+1]-a[i];
		}
		cout<<chenh<<endl;
	}
	
}