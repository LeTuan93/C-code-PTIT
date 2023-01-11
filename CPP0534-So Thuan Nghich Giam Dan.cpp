#include<bits/stdc++.h>

using namespace std;

int check(string s){
    int j=s.size()-1;
    int i=0;
    while (s[i]==s[j] ){
        i++;
        j--;
        if (i==s.size()-1) break;
    }
    if (i==s.size()-1) return 1;
    else return 0;
}

bool cmp(string a,string b){
    if (a.size()!=b.size()) return a.size()>b.size();
    return a > b;
}

int main() {
    string s;
    map<string ,int > mp;
    while (cin >> s){
        if (check(s)==1){
            mp[s]++;
        }
    }
    vector < string > v;
    for (auto it : mp){
        v.push_back(it.first);
    }
    sort(v.begin() , v.end(),cmp);
    for (int i=0;i<v.size();i++){
        for (auto x:mp){
            if (x.first==v[i]) cout << x.first << " " << x.second << endl;
        }
    }
}