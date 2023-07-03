// Program 80
//Pattern Program 30
     1 1 
    1 2 2 2
   1 3 2 3 3 3
  1 4 2 4 3 4 4 4
 1 5 2 5 3 5 4 5 5 5
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
            printf("%d ",i);
        }
    printf("\n");
    }
    return 0;
}
