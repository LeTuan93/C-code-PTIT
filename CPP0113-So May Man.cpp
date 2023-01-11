#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		int n=x.size();
		if(x[n-2]=='8' && x[n-1]=='6') cout<<1<<endl;
		else cout<<0<<endl;
	}
}