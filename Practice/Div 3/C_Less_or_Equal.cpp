#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    
   sort(arr, arr+n);
   
    if(k == 0 && arr[k] != 1){
        printf("1");
    }
    else if(k == 0 && arr[k] == 1){
        printf("-1");
    }
    
    else if(arr[k] == arr[k-1]){
        printf("-1");
    }
    
    else{
        printf("%d", arr[k-1]);
    }

    
    return 0;
}