// Program 17 Area of Rectangle is Greater or Perimeter ?. 
#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter Length of Rectangle: ");
    scanf("%d",&length);
    printf("Enter Breadth of Rectangle: ");
    scanf("%d",&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("Area of Rectangle is : %d:",area);
    printf("\nPerimeter of Rectangle is : %d",perimeter);
    if(area>perimeter){
        printf("\nArea of Rectangle is Greater");
    }
    else{
        printf("\nPerimeter of Rectangle is Greater");
    }
       return 0;
}
