//Pattern Program 26
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
#include<stdio.h>
int main(){
        int i,j,k=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",(k++)%2);
        }
    printf("\n");
    }
    return 0;
}
