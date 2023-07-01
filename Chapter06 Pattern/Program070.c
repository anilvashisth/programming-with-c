//Program 70
/*Pattern Program 20
A 
B A
C B A
D C B A
E D C B A */
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
        printf("%c ",j+64);
        }
    printf("\n");
    }
    return 0;
}
