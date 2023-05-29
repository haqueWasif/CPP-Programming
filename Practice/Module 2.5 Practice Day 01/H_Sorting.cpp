#include<bits/stdc++.h>

using namespace std;

// Using Selection Sort Algorithm

void sortArr(int *a, int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_pos = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);  
    }   
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortArr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}