#include<bits/stdc++.h>
using namespace std;

int maxArr(int *a, int n){
    int mx = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {   
        mx = max(mx, a[i]);
    }

    return mx;
    
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxArr(arr, n);
    
    
    return 0;
}