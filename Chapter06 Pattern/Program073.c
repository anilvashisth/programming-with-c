//Program 73
//Pattern Program 23
*
* *
*   *
*     *
* * * * *

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if (j==1||i==5||j==i)
            printf("* ");
            else
            printf("  ");
        }
    printf("\n");
    }
    return 0;
}
