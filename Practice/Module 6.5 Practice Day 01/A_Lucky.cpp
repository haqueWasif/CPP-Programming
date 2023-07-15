#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string ticket;
        cin >> ticket;
        
        int fS=0, lS=0;
        for (int i = 0; i < 3; i++)
        {
            fS += ticket[i] - '0';
        }

        for (int i = 3; i < 6; i++)
        {
            lS += ticket[i] - '0';
        }

        if(fS == lS){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}