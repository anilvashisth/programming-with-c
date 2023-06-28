// Program 23 Points lies on X-Axis,Y-Axis or on Origin
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    
    if(x==0 && y==0){
        printf("points are on origin");
    }
    else if (x==0){
    printf(" points are lies on y axis");
    }
    else if(y==0) {
        printf("points are lies on x axis");
    }
    else{
        printf("points are not lies on x or y axis");
    }


    return 0;
}
