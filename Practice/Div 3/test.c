#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int star=n, space=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        
        if(i < (n+1) / 2){
            space++;
            star-=2;
        }
        else{
            space--;
            star+=2;
        }
    }
    
    return 0;
}