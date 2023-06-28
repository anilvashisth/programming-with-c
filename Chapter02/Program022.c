// Please check the Program 22 Given Three points fall on straight line (x1,y1)(x2,y2)(x3,y3) 
//slope m1=y2-y1/x2-x1
//slope m2=y3-y2/x3-x2
#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter x1 :");
    scanf("%d",&x1);
    printf("Enter x2 :");
    scanf("%d",&x2);
    printf("Enter x3 :");
    scanf("%d",&x3);
    printf("Enter y1 :");
    scanf("%d",&y1);
    printf("Enter y2 :");
    scanf("%d",&y2);
    printf("Enter y3 :");
    scanf("%d",&y3);
    
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("Slope M1 is : %d", m1);
    printf("\nSlope M2 is : %d\n", m2);
    if(m1==m2){
        printf("Points are in straight line");
    }
    else{
    printf("Points are not in straight line");
    }

    return 0;
}
