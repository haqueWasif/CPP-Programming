#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int mn = min(a, b), mx = max(a, b);

    mn = min(mn, c);
    mx = max(mx, c);
    
    cout << mn << " " << mx;

    return 0;
}