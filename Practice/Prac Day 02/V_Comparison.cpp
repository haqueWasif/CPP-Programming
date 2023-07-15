#include<bits/stdc++.h>
using namespace std;

void compareNum(int a, int b, char ch){
    switch(ch){
        case '>':
            if(a > b) cout << "Right";
            else cout << "Wrong"; 
            break;
        case '<':
            if(a < b) cout << "Right"; 
            else cout << "Wrong"; 
            break;
        default:
            if(a == b) cout << "Right"; 
            else cout << "Wrong"; 
            break;
    }
}

int main(){
    int a, b;
    char cmp;
    cin >> a >> cmp >> b;

    compareNum(a, b, cmp);

    return 0;
}