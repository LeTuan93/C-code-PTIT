#include <bits/stdc++.h> 
using namespace std; 

int main() { 
	int t;
	cin>>t; 
	while(t--) { 
	int n;
	cin>>n; 
	int a[n+1]; 
	for (int i=0;i<n;i++) cin >> a[i];
	int x,y;
	cin>>x>>y; 
	while(a[x]<=a[x+1] && x<y) x++; 
	while(a[x]>=a[x+1] && x<y) x++; 
	if(x!=y) cout<<"No\n"; 
	else cout<<"Yes\n"; 
//	1 2 3 4 5 6
//	0 1 2 3 4 5
	  
	} 
}