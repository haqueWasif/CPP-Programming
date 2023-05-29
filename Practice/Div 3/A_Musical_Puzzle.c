#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
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
            freq[i]++;
        }

        int max=0;
        for (int i = 0; i < n; i++)
        {
            if(freq[i] == 1){
                max++;
            }
        }
        

        printf("%d\n", max);
    }

    return 0;
}