#include <stdio.h>

int a = 0;
int b = 1;
int fibonachi(int n){
    
    int sum = a+b;
    printf("%d\n",a);

    a = b;
    b = sum;
    if (n==0){
        return 0;
    }

    fibonachi(n-1);
    return 0;
}




int main(){
    int a;
    printf("Enter a number:- ");
    scanf("%d",&a);

    fibonachi(a);

    return 0;
}