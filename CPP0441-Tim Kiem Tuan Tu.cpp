#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
	    int n,x;
	    cin >> n >>x;
	    int a[n+1];
	    int check=0;
	    for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++){
			if (a[i]==x) {
				cout<<i+1<<endl;
				check=1;
				break;
			}
		}
		if (check==0) cout<<-1<<endl;
     }
}