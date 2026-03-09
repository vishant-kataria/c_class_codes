#include <stdio.h>

int main(){
    int a;
    printf("welcome to number checker!! here we will check if a number is even or odd\n");
    
    while (1){
        printf("Enter the number you wanna check or press 0 to exit:- ");
        scanf("%d",&a);
        if (a == 0){
            break;
        }
        else{
            if (a>0){
                if (a%2==0){
                    printf("it is even\n");
                    continue;
                }
                else{
                    printf("it is odd\n");
                    continue;
                }
            }
            else{
                printf("write a positive number\n");
                continue;
            }
        }
    }
   
    return 0;

}