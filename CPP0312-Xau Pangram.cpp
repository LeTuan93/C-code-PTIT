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
          int k;
          cin >> k;
          if (s.size()<26) cout<<0<<endl;
          else{
	          set<char> st;
	          for (int i=0;i<s.size();i++) st.insert(s[i]);
	          if (k+st.size()>=26) cout<<1;
	          else  cout<<0;
	          cout<<endl;
	      }
     }
}