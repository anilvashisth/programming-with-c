//Pattern Program 18
1 2 3 4 5 
2 3 4 5
3 4 5
4 5
5
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
        printf("%d ",j);
        }
    printf("\n");
    }
    return 0;
}
