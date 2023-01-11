#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
     	string s;
     	cin >> s;
     	unordered_map<char,int> p;
     	for (int i=0;i<s.size();i++){
     	     p[s[i]]++;
     	}
		for (int i=0;i<s.size();i++){
			if (p[s[i]]==1) cout<<s[i];
		}
     	cout<<endl;
	}
}