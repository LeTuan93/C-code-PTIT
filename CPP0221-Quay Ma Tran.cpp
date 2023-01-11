#include <bits/stdc++.h> 
using namespace std; 

int main () { 
	int t; 
	cin >> t; 
	while (t--) { 
		int n, m; 
		cin >> n >> m; 
		int a[10000], b[100][100], c[100][100]; 
		int i, j; 
		for (i=1; i<=n; i++) { 
			for (j=1; j<=m; j++) cin >> b[i][j]; 
		} 
		int h1=1, h2=n, c1=1, c2=m, k=1, ks=1; 
		int x1=1, x2=n, y1=1, y2=m, z=1; 
		while (h1 <= h2 && c1 <=c2) { 
			if (h1 <= h2 && c1 <=c2) { 
				for (i=c1; i<=c2; i++) a[k++]=b[h1][i]; h1++; 
			} 
			if (h1 <= h2 && c1 <=c2) { 
				for (i=h1; i<=h2; i++) a[k++]=b[i][c2]; c2--; 
			} 
			if (h1 <= h2 && c1 <=c2) { 
				for (i=c2; i>=c1; i--) a[k++]=b[h2][i]; h2--; 
			} 
			if (h1 <= h2 && c1 <=c2) { 
				for (i=h2; i>=h1; i--) a[k++]=b[i][c1]; c1++; 
			} 
			int tmp = a[k-1]; 
			for (int i=k-1; i>ks; i--) a[i] = a[i-1]; 
			a[ks] = tmp; 
			ks=k; 
			for (int i=y1; i<=y2; i++) c[x1][i]=a[z++]; 
			x1++; 
			for (int i=x1; i<=x2; i++) c[i][y2]=a[z++]; 
			y2--; 
			for (int i=y2; i>=y1; i--) c[x2][i]=a[z++]; 
			x2--; 
			for (int i=x2; i>=x1; i--) c[i][y1]=a[z++]; 
			y1++; 
		} 
		for (i=1; i<=n; i++) for (j=1; j<=m; j++) cout << c[i][j] << " "; 
		cout << endl; 
	} 
} 