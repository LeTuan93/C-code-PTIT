#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		long long tc=0,tl=0;
		for (int i=0;i<s.size();i++){
			if (i%2==1) tl+=(int)(s[i]-48);
			else tc+=(int)(s[i]-48);
		}
		if (abs(tl-tc)%11==0) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}