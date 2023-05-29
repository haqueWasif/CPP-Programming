#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", str);
    
    char arr[n-1][3];

    int i=0, j=0, count=0;
    while(str[i] != '\0'){
        arr[j][count] = str[i];
        count++;

        if(count >= 2){
            arr[j][count] = '\0';
            j++;
            count = 0;
            continue;
        }
        i++;
    }
    
    int freq[n-1];
    for (int i = 0; i < n-1; i++)
    {
        freq[i] = 0;
        for (int j = i+1; j < n; j++)
        {
            if(strcmp(arr[i], arr[j]) == 0){
                freq[i]++;
            }
        }
    }

    int max=0, k=0, index;
    for (; k < n-1; k++)
    {
        if(max < freq[k]){
            max = freq[k];
            index = k;

        }
    }

    printf("%s", arr[index]);
    
    

    return 0;
}