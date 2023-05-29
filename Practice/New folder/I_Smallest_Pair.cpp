#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int mn=INT_MAX;
        for (int i = 1; i <= n-1; i++)
        {
            for (int j = i+1; j <= n; j++)
            {   
                int temp = arr[i-1] + arr[j-1] + j  - i;
                mn = min(mn, temp);
            }   
        }

        cout << mn << endl;
    }

    
    return 0;
}