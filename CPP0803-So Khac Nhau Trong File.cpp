#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream fileOut("DATA.in", ios::in);
	int a;
    map <long long,long long> mp;
    while(fileOut>>a){
        mp[a]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}