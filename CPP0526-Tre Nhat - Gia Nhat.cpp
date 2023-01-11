#include<bits/stdc++.h>
using namespace std;


struct xx{
	string name,ns;
	long long p;
};

bool cmp(xx a , xx b){
	return a.p<b.p;
}
int main(){
	int t;
	cin >> t;
	struct xx a[t];
	for (int i=0;i<t;i++){
		cin >> a[i].name >> a[i].ns;
		if (a[i].ns[2]!='/') a[i].ns="0"+a[i].ns;
		if (a[i].ns[5]!='/') a[i].ns.insert(3,"0");
		string tmp="";
		tmp+=a[i].ns[6];
		tmp+=a[i].ns[7];
		tmp+=a[i].ns[8];
		tmp+=a[i].ns[9];
		tmp+=a[i].ns[3];
		tmp+=a[i].ns[4];
		tmp+=a[i].ns[0];
		tmp+=a[i].ns[1];
		a[i].p=stoll(tmp);
	}
	sort(a,a+t,cmp);
	cout << a[t-1].name <<endl << a[0].name << endl ;
	for (int i=0;i<t;i++){
		cout << a[i].name << " " << a[i].ns << " " << a[i].p <<endl;
	}
}