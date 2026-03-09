#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the of a:- ");
    scanf("%d",&a);
    
    while (1){
        printf("do you wanna decrease or increase (1 for inc, 2 for dec):- ");
        scanf("%d",&b);
        if (b == 1){
            printf("lets inc a by 1 the ans is:- %d\n",++a );
            break;
        }
        else if (b == 2){
            printf("lets dec a by 1 the ans is:- %d\n",--a);
            break;
        }
        else{
            printf("you are dumb as fuck rewrite value\n");
            continue;
        }
    };
    return 0;
}