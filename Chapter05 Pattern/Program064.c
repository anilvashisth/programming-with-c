//Program 64
//Pattern Program 14.1 Print Triangle (2nd Method)
#include<stdio.h>
int main(){
    int i,j;
    for (i=1;i<=5;i++)
    {
       for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
    printf("\n");
    }

    return 0;
}
