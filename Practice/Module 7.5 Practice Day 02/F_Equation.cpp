#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int x, long long int n){
    long long int res;

    if(n % 2 == 0){
        if(x == 1){ res = n/2;}
        else{
            res = abs((pow(x, n+2) - pow(x, 2)) / (pow(x, 2) - 1));
        }

    }
    else{
        if(x == 1) { res = (n-1)/2;}
        else{
            res = abs((pow(x, n+1) - pow(x, 2)) / (pow(x, 2) - 1));
        }
    }

    return res;
}

int main(){
    long long int x, n;
    cin >> x >> n;

    long long int res = solve(x, n);
    cout << res;

    return 0;
}