#include<bits/stdc++.h>
using namespace std;

void isPalindrome(int *arr, int n){
    for (int i = 0; i <= n-i-1; i++)
    {
        if(arr[i] != arr[n-i-1]){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    isPalindrome(a, n);
    
    return 0;
}