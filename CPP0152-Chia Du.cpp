#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a,m;;
		cin >> a >>m;
		int check=0;
		for (int i=1;i<=m-1;i++){
			if ((a*i)%m==1){
				cout << i;
				check=1;
				break;
			}
		}
		if (check==0) cout<<-1;
		cout<<endl;
	}
}