#include <bits/stdc++.h> 
using namespace std; 
using ll = long long; 

int main() { 
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int t; 
	cin >> t; 
	while(t--) { 
		string res; 
		int n; 
		string number; 
		cin >> n; 
		cin >> number; 
		for(int i = 0; i < n; i++) { 
			switch (number[i]) { 
				case '2': 
					res += "2"; 
					break; 
				case '3':  
					res += "3"; 
					break; 
				case '4':  
					res += "223"; 
					break; 
				case '5': 
					res += "5"; 
					break; 
				case '6': 
					res += "53"; 
					break; 
				case '7': 
					res += "7"; 
					break; 
				case '8': 
					res += "7222"; 
					break; 
				case '9': 
					res += "3372"; 
					break; 
				default : 
					break; 
			} 
		} 
		sort(res.begin(), res.end(), [](int a, int b){return a>b;}); 
		cout << res; 
		cout << "\n"; 
	} 
	return 0; 
}