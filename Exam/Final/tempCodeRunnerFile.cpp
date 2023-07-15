#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int pos = s.find("Ratul");
    (pos != -1)  ? cout << "YES\n" : cout << "NO\n";

    return 0;
}