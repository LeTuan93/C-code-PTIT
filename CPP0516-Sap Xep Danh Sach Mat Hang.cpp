#include<bits/stdc++.h>
using namespace std;


struct ds {
	string name, type;
	double purchase, sell, profit;
	int stt;
};

bool cmp(ds a, ds b) {
	return a.profit > b.profit;
}
int main() {
	int t;
	cin >> t;
	ds prod[t + 1];
	for (int i = 0; i < t; i++) {
	     prod[i].stt=i+1;
		cin.ignore();
		getline(cin, prod[i].name);
		getline(cin, prod[i].type);
		cin >> prod[i].purchase >> prod[i].sell;
		prod[i].profit = prod[i].sell - prod[i].purchase;
	}
	sort(prod, prod + t, cmp);
     for (int i=0;i<t;i++){
          cout << prod[i].stt <<" " <<prod[i].name << " " << prod[i].type << " "; 
          cout<<setprecision(2) << fixed << prod[i].profit<<endl;
     } 
}