#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count[26] = {};

    char c;
    while((cin >> c) && (c != EOF)){
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << char(i + 97);
        }
    }
    
    return 0;
}