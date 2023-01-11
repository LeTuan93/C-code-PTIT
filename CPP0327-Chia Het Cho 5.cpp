#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		if (n==1 && m==1) cout<< a[0][0] << endl;
		else{
			
			int c1=0,c2=m-1;
			int d1=0,d2=n-1;
			int t1=0;
			while (t1<n*m){
				for (int j=c1;j<c2 && c2>=c1;j++) {
					cout<< a[c1][j] <<" ";
					t1++;
					if (t1==n*m) break;
				}
				for (int i=d1;i<d2 && d2>=d1;i++) {
					cout<< a[i][c2] << " ";
					t1++;
					if (t1==n*m) break;
				}
				for (int j=c2;j>c1 && c2>=c1;j--){
					cout<< a[d2][j] << " ";
					t1++;
					if (t1==n*m) break;
				}
				for (int i=d2;i>d1 && d2>=d1;i--){
					cout << a[i][d1] << " ";
					t1++;
					if (t1==n*m) break;
				}
				c1++;
				c2--;
				d1++;
				d2--;
				if (c2<c1 || c1>=m || c2<0) break;
				if (d1>d2 || d1>=n || d2<0) break;
			}
			cout<<endl;
		}
	}
			
}