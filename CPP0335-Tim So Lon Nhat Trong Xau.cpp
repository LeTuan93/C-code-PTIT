#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		string tmp="";
		vector<long long> v;
		for (int i=0;i<s.size();i++){
			if (s[i]>=48 && s[i]<=57) {
				tmp+=s[i];
			}
			else {
				if (tmp!="") {
					while (tmp[0]=='0' && tmp.size()!=1){
						tmp.erase(tmp.begin()+0);
					}
					v.push_back(stoll(tmp));
					
				}
				tmp="";
			}
		}
		sort(v.begin(),v.end());
		cout<<v[v.size()-1]<<endl;
	}
}