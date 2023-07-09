// Program 88 About Pattern Program using c
/*
The No of Lines: 10
*********abcdefghijIHGFEDCBA
********abcdefghiHGFEDCBA
*******abcdefghGFEDCBA
******abcdefgFEDCBA
*****abcdefEDCBA
****abcdeDCBA
***abcdCBA
**abcBA
*abA
a
*/
#include<stdio.h>
int main(){
    int n;
    printf("The No of Lines: ");
    scanf("%d",&n);
    int nsp=n-1;
        
    for (int i=n;i>=1;i--){
        int a=i-1;
        for(int q=1;q<=nsp;q++){
            printf("*");
        }
        nsp--;
        for (int j=1;j<=i;j++){
            char ch =(char)( j+96);
            printf("%c",ch);
        }
        for (int k=1;k<=i-1;k++){
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;

        }
        printf("\n");
    }
    return 0;
}
