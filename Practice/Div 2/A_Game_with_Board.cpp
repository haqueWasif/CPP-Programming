#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    
    while(t--){
        int n;
        cin >> n;

        int alice = 0, bob = 0;

        if( n <= 3) cout << "Bob" << endl;
        while(n > 1){
            n = n/2;
            if(n % 2 != 0){
                alice = 0;
                bob = 1;
            }
            else{
                bob = 0;
                alice = 1;
            }
        }

        if(bob == 1) cout << "Alice" << endl;
        else cout << "Bob" << endl;
        
    }

    
    
    
    
    return 0;
}