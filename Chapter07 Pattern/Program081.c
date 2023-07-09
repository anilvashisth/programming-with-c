// Program 81 about Pattern Program using c
/*
The No of Lines: 5
1
12*
123**
1234***
12345****
*/
#include<stdio.h>
int main(){
    int n;
    printf("The No of Lines: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        for (int k=1;k<=i-1;k++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
