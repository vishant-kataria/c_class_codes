#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Enter value of a:- ");
    scanf("%d",&a);
    printf("Enter value of b:- ");
    scanf("%d",&b);
    printf("add (%d + %d) = %d\n",a,b,a+b);
    printf("subtract (%d - %d) = %d\n",a,b,a-b);
    printf("multiply (%d*%d) = %d\n",a,b,a*b);
    printf("divide (%d/%d) = %d\n",a,b,a/b);
}