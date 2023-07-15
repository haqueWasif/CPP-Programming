#include<bits/stdc++.h>
using namespace std;

void checkExpression(void){
    int a, b, res;
    char op, eq;
    cin >> a >> op >> b >> eq >> res;
    
    switch(op){
        case '+':
            if(a + b == res) cout << "Yes";
            else cout << a+b;
            break;
        case '-':
            if(a - b == res) cout << "Yes";
            else cout << a-b;
            break;
        default:
            if(a * b == res) cout << "Yes";
            else cout << a*b;
            break;
    }
}

int main(){
    checkExpression();
    return 0;
}