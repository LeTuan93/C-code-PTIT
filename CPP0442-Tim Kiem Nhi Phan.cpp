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
	    for (int i=0;i<n;i++) cin >> a[i];
	    sort(a,a+n);
	    if (binary_search(a,a+n,x)){
	         cout<<1<<endl;
	    }
	    else cout<<-1<<endl;
	    
     }
}