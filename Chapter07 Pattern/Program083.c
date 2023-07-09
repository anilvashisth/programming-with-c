// Program 83 About Pattern Program using c
/*
The No of Lines: 5
    1
   121
  12321
 1234321
123454321
*/
#include<stdio.h>
int main(){
    int n;
    printf("The No of Lines: ");
    scanf("%d",&n);
    int nsp=n-1;
        
    for (int i=1;i<=n;i++){
        int a=i-1;
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        for (int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;

        }
        printf("\n");
    }
    return 0;
}
