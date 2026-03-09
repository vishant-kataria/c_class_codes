#include <stdio.h>

int main(){
    int a,b;
    printf("Enter value of a:- ");
    scanf("%d",&a);
    printf("Enter value of b:- ");
    scanf("%d",&b);
    printf("0 = false 1 = true\n");
    printf("is a greater than b:- %d\n",a>b);
    printf("is b greater than a:- %d\n",b>a);
}