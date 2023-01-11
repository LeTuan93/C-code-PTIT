#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		long long tmp=0;
		long long tong=0;
		for (int i=0;i<s.size();i++){
			if (s[i]>='0' && s[i]<='9'){
				tmp=tmp*10+(s[i]-'0');
			}
			else {
				tong+=tmp;
				tmp=0;
			}
		}
		tong+=tmp;
		cout<<tong<<endl;
	}
}