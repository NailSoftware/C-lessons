#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, y;
    x = 12;
    y = 7;

    // true = 1 , false = 0

    printf("Result:%d x==y\n", x==y);
    printf("Result:%d x!=y\n",x!=y);
    printf("Result:%d x>y\n",x>y);
    printf("Result:%d x<y\n",x<y);
    printf("Result:%d x>=y\n",x>=y);
    printf("Result:%d x<=y\n",x<=y);

    printf("(x==0 && x<y) result:%d",(x==0 && x<y));
    printf("(x>12 || y<1) result:%d",(x>12 || y<1));
    printf("!(x<2 || y==1) result:%d",!(x<2 || y==1));

    return 0;
    
}