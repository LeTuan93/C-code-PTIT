#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;cin >> t;
     while (t--){
	     string s;
	     cin >> s;
	     int check=0;
	     int j=s.size()-1;
	     for (int i=0;i<s.size();i++){
	        if (s[i]!=s[j]) check=1;
	        j--;
	        if (check==1) break;
	     }
	     if (check==0 && (int)(s[s.size()-1]-48)%2==0) cout<<"YES";
	     else cout<<"NO";
	     cout<<endl;
 	}
}