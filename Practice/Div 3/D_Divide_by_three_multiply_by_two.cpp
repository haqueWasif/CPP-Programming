#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int newArr[n];

    for (int i = 0; i < n; i++)
    {
        
        int k=0, count = 0;
        newArr[k] = arr[i];

        for (int j = 0; j < n; j++)
        {
            if( (newArr[k] % 3 == 0) && (newArr[k] / 3 == arr[j]) ){
                k++;
                newArr[k] = arr[j];
                j=0;
                j--;
                count++;
            }   

            else if(newArr[k] * 2 == arr[j]){
                k++;
                newArr[k] = arr[j];
                j=0;
                j--;
                count++;
            }
        }

        if(count == n-1){ 
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
    
    

    
    return 0;
}