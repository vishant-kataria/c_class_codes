#include<stdio.h>
int sum_of_n_number(int n){

        if (n==0){
            return 0;
        }
        else{
            return n + sum_of_n_number(n-1);
        }

    }



int main(){
    int a;
    printf("Enter a number:- ");
    scanf("%d",&a);
    
    int sum = sum_of_n_number(a);

    printf("%d",sum);

    return 0;



    
}