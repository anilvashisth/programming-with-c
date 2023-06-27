// Lecture 6 To find type of Triangle using Side of Triangle.
#include<stdio.h>
int main(){
    int sideAB,sideBC,sideCA;
    printf("Do the Triangle Program using Side\n");
    printf("Enter Length of sideAB: ");
    scanf("%d",&sideAB);
    printf("Enter Length of sideBC: ");
    scanf("%d",&sideBC);
    printf("Enter Length of sideCA: ");
    scanf("%d",&sideCA);
    
    if(sideAB==sideBC && sideBC== sideCA)
        printf("Triangle is Equilateral Triangle");
        else if(sideAB==sideBC||sideBC==sideCA||sideCA==sideAB)
        printf("Tringle is isosceles");
        else
        printf("Triangle is Scalene Triangle");
        
    return 0;
}
