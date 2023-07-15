#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int freq[100] = {0};
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int isPossible=1;
        for (int i = 0; i < 99; i++)
        {
            if(freq[i+1] > freq[i]){
                isPossible=0;
                break;
            }
        }

        
        if(isPossible) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}