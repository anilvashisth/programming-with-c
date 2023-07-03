// Program 78
//Pattern Program 28
     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
#include<stdio.h>
int main(){
        int i,j,k;
    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>=i;k--)
            printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
    printf("\n");
    }
    return 0;
}
