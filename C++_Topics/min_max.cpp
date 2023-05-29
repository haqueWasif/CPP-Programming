#include<iostream>
#include<algorithm>
// min and max functions are included in the header file named algorithm
using namespace std;

// int my_min(int a, int b){
//     if(a<b) return a;
//     return b;
// }

// int my_max(int a, int b){
//     if(a>b) return a;
//     return b;
// }

int main(){
    int a, b;
    cin >> a >> b;

    // int mn = my_min(a, b);
    // cout << mn << endl;

    // int mx = my_max(a, b);
    // cout << mx << endl;

    int mn = min(a, b);
    cout << mn << endl;

    int mx = max(a, b);
    cout << mx << endl;
    return 0;
}