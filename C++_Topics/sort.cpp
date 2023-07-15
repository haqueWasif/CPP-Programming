#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting ascending
    sort(arr, arr+n);

    //sort(first pointer, after last pointer)
    // since this sort function works working from first argument till one before the second argument

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    // using comparison function

    // sorting descending
    sort(arr, arr+n, greater<int>());
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}