#include <stdio.h>

int sum(int a,int b){

    long long int sum = a+b;
    return sum;


}
int main(){
    printf("hello world!!\n");
    long long int c,d;
    printf("enter both number you wanna sum:- ");
    scanf("%d %d",&c,&d);
    printf("%d\n",sum(c,d));

    // int main() {
    //     printf("hello\n");

    //     return 0;
    // }
    // main();
    // main();
    return 0;
    
};

// int main(){
//     printf("hello");

//     return 0;
// }


