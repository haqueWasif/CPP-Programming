#include<stdio.h>

int main(){
    int q;
    scanf("%d", &q);
    
    while(q--){
        int n, t;
        scanf("%d %d", &n, &t);

        int time[n], ent[n], search[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", time+i);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", ent+i);
        }

        for (int i = 0; i < n; i++)
        {
            search[i] = 1;
        }

        int max=0, max_pos, count=0;
        
        do{
            for (int i = 0; i < n; i++)
            {
                if(max < ent[i] && search[i] != 0){
                    max = ent[i];
                    max_pos = i;
                }
            }

            if(time[max_pos] + max_pos <= t){
                printf("%d\n", max_pos+1);
                break;
            }
            else{
                max = 0;
                search[max_pos] = 0;
                count++;
            }

            if(count == n){
                printf("-1\n");
            }

        }while(count <= n);
    }

    return 0;
}