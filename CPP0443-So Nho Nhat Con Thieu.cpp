#include<bits/stdc++.h>
using namespace std;

int a[10000005];
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--){
	    int n;
	    cin  >> n;
	    for (int i=0;i<n-1;i++) cin >> a[i];
	    sort(a,a+n);
	    int check=0;
	    for (int i=0;i<n-2;i++){
	         if (a[i]+1!=a[i+1]){
	              cout<<a[i]+1<<endl;
	              check=1;
	              break;
	         }
	    }
	    if (check==0) cout<<a[n-2]+1<<endl;
     }
}