#include<stdio.h>
#include<math.h>
double mysqrt(double x){
        double guess = x;

        for(int i=0;i<10;i++){
            guess = (guess +(x/guess)) / 2;
        }
        return guess;
    }


int main(){
    double result;
    printf("Enter the number you want to get square root off:- ");
    scanf("%lf",&result);

    double root = mysqrt(result);

    printf("the square root is %lf",root);


    return 0;
}
