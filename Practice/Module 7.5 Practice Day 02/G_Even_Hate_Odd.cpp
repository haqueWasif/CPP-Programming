#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;


    while(t--){
        int n;
        cin >> n;

        int a[n], countE=0, countO=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0) countE++;
            else countO++;
        }

        if(n % 2 != 0){
            cout << "-1" << endl;
        }
        else{
            cout << abs(countE - countO)/2 << endl;
            
        }
        
    }


    return 0;
}