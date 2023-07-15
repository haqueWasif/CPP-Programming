#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int backS = 0, midS = n-2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= backS; j++) cout << " ";

        if(i <= (n+1)/2) cout << i;
        else cout << n+1-i;

        for (int j = 1; j <= midS; j++) cout << " ";

        if(i < (n+1)/2){
            backS+=1;
            midS-=2;
        }

        else if(i == (n+1)/2){
            backS-=1;
            midS+=2;
        }

        else{
            backS-=1;
            midS+=2;
        }
       
        if(i != (n+1) / 2 && i <= (n+1)/2) cout << i;
        else if (i != (n+1) / 2) cout << n+1-i;

        cout << endl;
        
    }

    
    return 0;
}