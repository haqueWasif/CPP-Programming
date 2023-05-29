#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", a+i);
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", b+i);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                float diff = a[i] - b[j];
                if(abs(diff) <= k){
                    if(i!=j){
                        int temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                        break;
                    }
                    else{
                        break;
                    }
                }

                if(j == n-1){
                    for (int l = 0; l < n; l++)
                    {
                        float diff1 = a[l] - b[j];
                        float diff2 = a[j] - b[l];
                        if(abs(diff1) <= k &&  abs(diff2) <= k){
                            int temp = b[j];
                            b[j] = b[l];
                            b[l] = temp;
                            break;
                        }
                    }
                    
                }
            }
        
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");   
    }

    return 0;
}